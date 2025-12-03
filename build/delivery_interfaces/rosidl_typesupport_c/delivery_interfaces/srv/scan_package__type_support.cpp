// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from delivery_interfaces:srv/ScanPackage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "delivery_interfaces/srv/detail/scan_package__struct.h"
#include "delivery_interfaces/srv/detail/scan_package__type_support.h"
#include "delivery_interfaces/srv/detail/scan_package__functions.h"
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

typedef struct _ScanPackage_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_Request_type_support_ids_t;

static const _ScanPackage_Request_type_support_ids_t _ScanPackage_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ScanPackage_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScanPackage_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScanPackage_Request_type_support_symbol_names_t _ScanPackage_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, ScanPackage_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, ScanPackage_Request)),
  }
};

typedef struct _ScanPackage_Request_type_support_data_t
{
  void * data[2];
} _ScanPackage_Request_type_support_data_t;

static _ScanPackage_Request_type_support_data_t _ScanPackage_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScanPackage_Request_message_typesupport_map = {
  2,
  "delivery_interfaces",
  &_ScanPackage_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ScanPackage_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ScanPackage_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ScanPackage_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_interfaces__srv__ScanPackage_Request__get_type_hash,
  &delivery_interfaces__srv__ScanPackage_Request__get_type_description,
  &delivery_interfaces__srv__ScanPackage_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, ScanPackage_Request)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::ScanPackage_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__type_support.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__functions.h"
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

typedef struct _ScanPackage_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_Response_type_support_ids_t;

static const _ScanPackage_Response_type_support_ids_t _ScanPackage_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ScanPackage_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScanPackage_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScanPackage_Response_type_support_symbol_names_t _ScanPackage_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, ScanPackage_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, ScanPackage_Response)),
  }
};

typedef struct _ScanPackage_Response_type_support_data_t
{
  void * data[2];
} _ScanPackage_Response_type_support_data_t;

static _ScanPackage_Response_type_support_data_t _ScanPackage_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScanPackage_Response_message_typesupport_map = {
  2,
  "delivery_interfaces",
  &_ScanPackage_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ScanPackage_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ScanPackage_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ScanPackage_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_interfaces__srv__ScanPackage_Response__get_type_hash,
  &delivery_interfaces__srv__ScanPackage_Response__get_type_description,
  &delivery_interfaces__srv__ScanPackage_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, ScanPackage_Response)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::ScanPackage_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__type_support.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__functions.h"
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

typedef struct _ScanPackage_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_Event_type_support_ids_t;

static const _ScanPackage_Event_type_support_ids_t _ScanPackage_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ScanPackage_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScanPackage_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScanPackage_Event_type_support_symbol_names_t _ScanPackage_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, ScanPackage_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, ScanPackage_Event)),
  }
};

typedef struct _ScanPackage_Event_type_support_data_t
{
  void * data[2];
} _ScanPackage_Event_type_support_data_t;

static _ScanPackage_Event_type_support_data_t _ScanPackage_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScanPackage_Event_message_typesupport_map = {
  2,
  "delivery_interfaces",
  &_ScanPackage_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ScanPackage_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ScanPackage_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ScanPackage_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delivery_interfaces__srv__ScanPackage_Event__get_type_hash,
  &delivery_interfaces__srv__ScanPackage_Event__get_type_description,
  &delivery_interfaces__srv__ScanPackage_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, ScanPackage_Event)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::ScanPackage_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__type_support.h"
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
typedef struct _ScanPackage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_type_support_ids_t;

static const _ScanPackage_type_support_ids_t _ScanPackage_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ScanPackage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScanPackage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScanPackage_type_support_symbol_names_t _ScanPackage_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delivery_interfaces, srv, ScanPackage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delivery_interfaces, srv, ScanPackage)),
  }
};

typedef struct _ScanPackage_type_support_data_t
{
  void * data[2];
} _ScanPackage_type_support_data_t;

static _ScanPackage_type_support_data_t _ScanPackage_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScanPackage_service_typesupport_map = {
  2,
  "delivery_interfaces",
  &_ScanPackage_service_typesupport_ids.typesupport_identifier[0],
  &_ScanPackage_service_typesupport_symbol_names.symbol_name[0],
  &_ScanPackage_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ScanPackage_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ScanPackage_Request_message_type_support_handle,
  &ScanPackage_Response_message_type_support_handle,
  &ScanPackage_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_interfaces,
    srv,
    ScanPackage
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delivery_interfaces,
    srv,
    ScanPackage
  ),
  &delivery_interfaces__srv__ScanPackage__get_type_hash,
  &delivery_interfaces__srv__ScanPackage__get_type_description,
  &delivery_interfaces__srv__ScanPackage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace delivery_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, delivery_interfaces, srv, ScanPackage)() {
  return &::delivery_interfaces::srv::rosidl_typesupport_c::ScanPackage_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
