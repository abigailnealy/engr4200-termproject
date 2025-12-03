// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delivery_interfaces:srv/SetLiftState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_interfaces/srv/set_lift_state.h"


#ifndef DELIVERY_INTERFACES__SRV__DETAIL__SET_LIFT_STATE__STRUCT_H_
#define DELIVERY_INTERFACES__SRV__DETAIL__SET_LIFT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLiftState in the package delivery_interfaces.
typedef struct delivery_interfaces__srv__SetLiftState_Request
{
  /// e.g. "PICKUP_HEIGHT", "CARRY_HEIGHT", "DROPOFF_HEIGHT"
  rosidl_runtime_c__String target_state;
} delivery_interfaces__srv__SetLiftState_Request;

// Struct for a sequence of delivery_interfaces__srv__SetLiftState_Request.
typedef struct delivery_interfaces__srv__SetLiftState_Request__Sequence
{
  delivery_interfaces__srv__SetLiftState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_interfaces__srv__SetLiftState_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLiftState in the package delivery_interfaces.
typedef struct delivery_interfaces__srv__SetLiftState_Response
{
  bool success;
  rosidl_runtime_c__String message;
} delivery_interfaces__srv__SetLiftState_Response;

// Struct for a sequence of delivery_interfaces__srv__SetLiftState_Response.
typedef struct delivery_interfaces__srv__SetLiftState_Response__Sequence
{
  delivery_interfaces__srv__SetLiftState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_interfaces__srv__SetLiftState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  delivery_interfaces__srv__SetLiftState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  delivery_interfaces__srv__SetLiftState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLiftState in the package delivery_interfaces.
typedef struct delivery_interfaces__srv__SetLiftState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  delivery_interfaces__srv__SetLiftState_Request__Sequence request;
  delivery_interfaces__srv__SetLiftState_Response__Sequence response;
} delivery_interfaces__srv__SetLiftState_Event;

// Struct for a sequence of delivery_interfaces__srv__SetLiftState_Event.
typedef struct delivery_interfaces__srv__SetLiftState_Event__Sequence
{
  delivery_interfaces__srv__SetLiftState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_interfaces__srv__SetLiftState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELIVERY_INTERFACES__SRV__DETAIL__SET_LIFT_STATE__STRUCT_H_
