// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delivery_interfaces:srv/ScanPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_interfaces/srv/scan_package.h"


#ifndef DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__STRUCT_H_
#define DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ScanPackage in the package delivery_interfaces.
typedef struct delivery_interfaces__srv__ScanPackage_Request
{
  bool trigger;
} delivery_interfaces__srv__ScanPackage_Request;

// Struct for a sequence of delivery_interfaces__srv__ScanPackage_Request.
typedef struct delivery_interfaces__srv__ScanPackage_Request__Sequence
{
  delivery_interfaces__srv__ScanPackage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_interfaces__srv__ScanPackage_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'dropoff_id'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ScanPackage in the package delivery_interfaces.
typedef struct delivery_interfaces__srv__ScanPackage_Response
{
  rosidl_runtime_c__String dropoff_id;
  bool success;
  rosidl_runtime_c__String message;
} delivery_interfaces__srv__ScanPackage_Response;

// Struct for a sequence of delivery_interfaces__srv__ScanPackage_Response.
typedef struct delivery_interfaces__srv__ScanPackage_Response__Sequence
{
  delivery_interfaces__srv__ScanPackage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_interfaces__srv__ScanPackage_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  delivery_interfaces__srv__ScanPackage_Event__request__MAX_SIZE = 1
};
// response
enum
{
  delivery_interfaces__srv__ScanPackage_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ScanPackage in the package delivery_interfaces.
typedef struct delivery_interfaces__srv__ScanPackage_Event
{
  service_msgs__msg__ServiceEventInfo info;
  delivery_interfaces__srv__ScanPackage_Request__Sequence request;
  delivery_interfaces__srv__ScanPackage_Response__Sequence response;
} delivery_interfaces__srv__ScanPackage_Event;

// Struct for a sequence of delivery_interfaces__srv__ScanPackage_Event.
typedef struct delivery_interfaces__srv__ScanPackage_Event__Sequence
{
  delivery_interfaces__srv__ScanPackage_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delivery_interfaces__srv__ScanPackage_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__STRUCT_H_
