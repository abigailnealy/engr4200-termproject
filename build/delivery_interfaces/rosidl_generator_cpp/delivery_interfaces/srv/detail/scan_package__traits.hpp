// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delivery_interfaces:srv/ScanPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_interfaces/srv/scan_package.hpp"


#ifndef DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__TRAITS_HPP_
#define DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delivery_interfaces/srv/detail/scan_package__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace delivery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ScanPackage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: trigger
  {
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScanPackage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScanPackage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use delivery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delivery_interfaces::srv::ScanPackage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  delivery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delivery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const delivery_interfaces::srv::ScanPackage_Request & msg)
{
  return delivery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<delivery_interfaces::srv::ScanPackage_Request>()
{
  return "delivery_interfaces::srv::ScanPackage_Request";
}

template<>
inline const char * name<delivery_interfaces::srv::ScanPackage_Request>()
{
  return "delivery_interfaces/srv/ScanPackage_Request";
}

template<>
struct has_fixed_size<delivery_interfaces::srv::ScanPackage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<delivery_interfaces::srv::ScanPackage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<delivery_interfaces::srv::ScanPackage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace delivery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ScanPackage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: dropoff_id
  {
    out << "dropoff_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_id, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScanPackage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dropoff_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropoff_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_id, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScanPackage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use delivery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delivery_interfaces::srv::ScanPackage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  delivery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delivery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const delivery_interfaces::srv::ScanPackage_Response & msg)
{
  return delivery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<delivery_interfaces::srv::ScanPackage_Response>()
{
  return "delivery_interfaces::srv::ScanPackage_Response";
}

template<>
inline const char * name<delivery_interfaces::srv::ScanPackage_Response>()
{
  return "delivery_interfaces/srv/ScanPackage_Response";
}

template<>
struct has_fixed_size<delivery_interfaces::srv::ScanPackage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delivery_interfaces::srv::ScanPackage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delivery_interfaces::srv::ScanPackage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace delivery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ScanPackage_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScanPackage_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScanPackage_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use delivery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delivery_interfaces::srv::ScanPackage_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  delivery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delivery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const delivery_interfaces::srv::ScanPackage_Event & msg)
{
  return delivery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<delivery_interfaces::srv::ScanPackage_Event>()
{
  return "delivery_interfaces::srv::ScanPackage_Event";
}

template<>
inline const char * name<delivery_interfaces::srv::ScanPackage_Event>()
{
  return "delivery_interfaces/srv/ScanPackage_Event";
}

template<>
struct has_fixed_size<delivery_interfaces::srv::ScanPackage_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delivery_interfaces::srv::ScanPackage_Event>
  : std::integral_constant<bool, has_bounded_size<delivery_interfaces::srv::ScanPackage_Request>::value && has_bounded_size<delivery_interfaces::srv::ScanPackage_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<delivery_interfaces::srv::ScanPackage_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<delivery_interfaces::srv::ScanPackage>()
{
  return "delivery_interfaces::srv::ScanPackage";
}

template<>
inline const char * name<delivery_interfaces::srv::ScanPackage>()
{
  return "delivery_interfaces/srv/ScanPackage";
}

template<>
struct has_fixed_size<delivery_interfaces::srv::ScanPackage>
  : std::integral_constant<
    bool,
    has_fixed_size<delivery_interfaces::srv::ScanPackage_Request>::value &&
    has_fixed_size<delivery_interfaces::srv::ScanPackage_Response>::value
  >
{
};

template<>
struct has_bounded_size<delivery_interfaces::srv::ScanPackage>
  : std::integral_constant<
    bool,
    has_bounded_size<delivery_interfaces::srv::ScanPackage_Request>::value &&
    has_bounded_size<delivery_interfaces::srv::ScanPackage_Response>::value
  >
{
};

template<>
struct is_service<delivery_interfaces::srv::ScanPackage>
  : std::true_type
{
};

template<>
struct is_service_request<delivery_interfaces::srv::ScanPackage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<delivery_interfaces::srv::ScanPackage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__TRAITS_HPP_
