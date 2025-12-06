from typing import Optional

from rclpy.node import Node

try:
    import serial  # pyserial
except ImportError:
    serial = None


class RackPinionHardwareInterface:

    def __init__(self, node: Node) -> None:
        self._node = node
        self._ser = None  # serial.Serial instance after initialize()


    # ---------------- Hardware lifecycle ---------------- #

    def initialize(self) -> bool:
        """Open the serial port to the Arduino."""
        if serial is None:
            self._node.get_logger().error(
                "pyserial is not installed. Install it with "
                "`pip install pyserial` or add it as a dependency."
            )
            return False

        # Parameters were declared in RackPinionController.__init__
        port_param = self._node.get_parameter("serial.port")
        baud_param = self._node.get_parameter("serial.baud")

        port = (
            port_param.get_parameter_value().string_value
            if port_param is not None
            else "/dev/ttyACM0"
        )
        baud = (
            baud_param.get_parameter_value().integer_value
            if baud_param is not None
            else 115200
        )

        try:
            self._ser = serial.Serial(
                port=port,
                baudrate=baud,
                timeout=1.0,
                write_timeout=1.0,
            )
        except Exception as exc:
            self._node.get_logger().error(
                f"RackPinionHardwareInterface: failed to open serial port "
                f"{port} @ {baud} baud: {exc!r}"
            )
            self._ser = None
            return False

        self._node.get_logger().info(
            f"RackPinionHardwareInterface: opened serial port {port} @ {baud} baud."
        )
        return True

    def _send_command(self, cmd: str) -> bool:
        """Send a single-character command plus newline to Arduino."""
        if self._ser is None:
            self._node.get_logger().error(
                "RackPinionHardwareInterface: serial port not open."
            )
            return False

        if not cmd or len(cmd) != 1:
            self._node.get_logger().error(
                f"RackPinionHardwareInterface: invalid command {cmd!r}."
            )
            return False

        try:
            payload = (cmd + "\n").encode("ascii")
            self._ser.write(payload)
            self._ser.flush()
            self._node.get_logger().debug(
                f"RackPinionHardwareInterface: sent command {cmd!r}"
            )
            return True
        except Exception as exc:
            self._node.get_logger().error(
                f"RackPinionHardwareInterface: serial write failed: {exc!r}"
            )
            return False

    # ---------------- Public API used by controller ---------------- #

    def command_motion(self, target_state: str) -> bool:
        """Command the lift to move toward a logical state.

        target_state examples (from RackPinionController):
          - 'PICKUP_HEIGHT'
          - 'CARRY_HEIGHT'
          - 'DROPOFF_HEIGHT'
        """
        target_upper = target_state.strip().upper()

        if target_upper == "PICKUP_HEIGHT":
            cmd = "P"
        elif target_upper == "CARRY_HEIGHT":
            cmd = "C"
        elif target_upper == "DROPOFF_HEIGHT":
            cmd = "D"
        else:
            self._node.get_logger().error(
                "RackPinionHardwareInterface: unknown logical target_state "
                f"{target_state!r}"
            )
            return False

        self._node.get_logger().info(
            "RackPinionHardwareInterface: command_motion -> "
            f"{target_upper} (cmd={cmd!r})."
        )
        return self._send_command(cmd)

    def stop_motion(self) -> None:
        """Send a stop command (optional for a position servo)."""
        self._node.get_logger().warn(
            "RackPinionHardwareInterface: STOP command."
        )
      
        self._send_command("S")
