// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from delivery_interfaces:srv/SetLiftState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "delivery_interfaces/srv/detail/set_lift_state__functions.h"
#include "delivery_interfaces/srv/detail/set_lift_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLiftState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_Request_type_support_ids_t;

static const _SetLiftState_Request_type_support_ids_t _SetLiftState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, SetLiftState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, SetLiftState_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delivery_interfaces__srv__SetLiftState_Request__get_type_hash,
  &delivery_interfaces__srv__SetLiftState_Request__get_type_description,
  &delivery_interfaces__srv__SetLiftState_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Request>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::SetLiftState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, SetLiftState_Request)() {
  return get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__functions.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLiftState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_Response_type_support_ids_t;

static const _SetLiftState_Response_type_support_ids_t _SetLiftState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, SetLiftState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, SetLiftState_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delivery_interfaces__srv__SetLiftState_Response__get_type_hash,
  &delivery_interfaces__srv__SetLiftState_Response__get_type_description,
  &delivery_interfaces__srv__SetLiftState_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Response>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::SetLiftState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, SetLiftState_Response)() {
  return get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__functions.h"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLiftState_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_Event_type_support_ids_t;

static const _SetLiftState_Event_type_support_ids_t _SetLiftState_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, SetLiftState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, SetLiftState_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delivery_interfaces__srv__SetLiftState_Event__get_type_hash,
  &delivery_interfaces__srv__SetLiftState_Event__get_type_description,
  &delivery_interfaces__srv__SetLiftState_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Event>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::SetLiftState_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, SetLiftState_Event)() {
  return get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "delivery_interfaces/srv/detail/set_lift_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delivery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLiftState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLiftState_type_support_ids_t;

static const _SetLiftState_type_support_ids_t _SetLiftState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, SetLiftState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, SetLiftState)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLiftState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delivery_interfaces::srv::SetLiftState_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<delivery_interfaces::srv::SetLiftState>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<delivery_interfaces::srv::SetLiftState>,
  &delivery_interfaces__srv__SetLiftState__get_type_hash,
  &delivery_interfaces__srv__SetLiftState__get_type_description,
  &delivery_interfaces__srv__SetLiftState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<delivery_interfaces::srv::SetLiftState>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::SetLiftState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, SetLiftState)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<delivery_interfaces::srv::SetLiftState>();
}

#ifdef __cplusplus
}
#endif
