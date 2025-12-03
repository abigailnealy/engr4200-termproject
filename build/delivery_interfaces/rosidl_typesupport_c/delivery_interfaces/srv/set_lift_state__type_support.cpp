// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from delivery_interfaces:srv/SetLiftState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "delivery_interfaces/srv/detail/set_lift_state__struct.h"
#include "delivery_interfaces/srv/detail/set_lift_state__type_support.h"
#include "delivery_interfaces/srv/detail/set_lift_state__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLiftState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_Request_type_support_ids_t;

static const _SetLiftState_Request_type_support_ids_t _SetLiftState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLiftState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLiftState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLiftState_Request_type_support_symbol_names_t _SetLiftState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, SetLiftState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, SetLiftState_Request)),
  }
};

typedef struct _SetLiftState_Request_type_support_data_t
{
  void * data[2];
} _SetLiftState_Request_type_support_data_t;

static _SetLiftState_Request_type_support_data_t _SetLiftState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLiftState_Request_message_typesupport_map = {
  2,
  "delivery_interfaces",
  &_SetLiftState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetLiftState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetLiftState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLiftState_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_interfaces__srv__SetLiftState_Request__get_type_hash,
  &delivery_interfaces__srv__SetLiftState_Request__get_type_description,
  &delivery_interfaces__srv__SetLiftState_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, SetLiftState_Request)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::SetLiftState_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__type_support.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLiftState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_Response_type_support_ids_t;

static const _SetLiftState_Response_type_support_ids_t _SetLiftState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLiftState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLiftState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLiftState_Response_type_support_symbol_names_t _SetLiftState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, SetLiftState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, SetLiftState_Response)),
  }
};

typedef struct _SetLiftState_Response_type_support_data_t
{
  void * data[2];
} _SetLiftState_Response_type_support_data_t;

static _SetLiftState_Response_type_support_data_t _SetLiftState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLiftState_Response_message_typesupport_map = {
  2,
  "delivery_interfaces",
  &_SetLiftState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetLiftState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetLiftState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLiftState_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_interfaces__srv__SetLiftState_Response__get_type_hash,
  &delivery_interfaces__srv__SetLiftState_Response__get_type_description,
  &delivery_interfaces__srv__SetLiftState_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, SetLiftState_Response)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::SetLiftState_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__type_support.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLiftState_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_Event_type_support_ids_t;

static const _SetLiftState_Event_type_support_ids_t _SetLiftState_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLiftState_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLiftState_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLiftState_Event_type_support_symbol_names_t _SetLiftState_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, SetLiftState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, SetLiftState_Event)),
  }
};

typedef struct _SetLiftState_Event_type_support_data_t
{
  void * data[2];
} _SetLiftState_Event_type_support_data_t;

static _SetLiftState_Event_type_support_data_t _SetLiftState_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLiftState_Event_message_typesupport_map = {
  2,
  "delivery_interfaces",
  &_SetLiftState_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetLiftState_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetLiftState_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLiftState_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_interfaces__srv__SetLiftState_Event__get_type_hash,
  &delivery_interfaces__srv__SetLiftState_Event__get_type_description,
  &delivery_interfaces__srv__SetLiftState_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, SetLiftState_Event)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::SetLiftState_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetLiftState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_type_support_ids_t;

static const _SetLiftState_type_support_ids_t _SetLiftState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLiftState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLiftState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLiftState_type_support_symbol_names_t _SetLiftState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, SetLiftState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, SetLiftState)),
  }
};

typedef struct _SetLiftState_type_support_data_t
{
  void * data[2];
} _SetLiftState_type_support_data_t;

static _SetLiftState_type_support_data_t _SetLiftState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLiftState_service_typesupport_map = {
  2,
  "delivery_interfaces",
  &_SetLiftState_service_typesupport_ids.typesupport_identifier[0],
  &_SetLiftState_service_typesupport_symbol_names.symbol_name[0],
  &_SetLiftState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetLiftState_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetLiftState_Request_message_type_support_handle,
  &SetLiftState_Response_message_type_support_handle,
  &SetLiftState_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_interfaces,
    srv,
    SetLiftState
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_interfaces,
    srv,
    SetLiftState
  ),
  &delivery_interfaces__srv__SetLiftState__get_type_hash,
  &delivery_interfaces__srv__SetLiftState__get_type_description,
  &delivery_interfaces__srv__SetLiftState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, SetLiftState)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::SetLiftState_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
