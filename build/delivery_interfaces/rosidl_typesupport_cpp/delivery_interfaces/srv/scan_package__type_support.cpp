// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from delivery_interfaces:srv/ScanPackage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "delivery_interfaces/srv/detail/scan_package__functions.h"
#include "delivery_interfaces/srv/detail/scan_package__struct.hpp"
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

typedef struct _ScanPackage_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_Request_type_support_ids_t;

static const _ScanPackage_Request_type_support_ids_t _ScanPackage_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, ScanPackage_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, ScanPackage_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delivery_interfaces__srv__ScanPackage_Request__get_type_hash,
  &delivery_interfaces__srv__ScanPackage_Request__get_type_description,
  &delivery_interfaces__srv__ScanPackage_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Request>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::ScanPackage_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, ScanPackage_Request)() {
  return get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Request>();
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
// #include "delivery_interfaces/srv/detail/scan_package__functions.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__struct.hpp"
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

typedef struct _ScanPackage_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_Response_type_support_ids_t;

static const _ScanPackage_Response_type_support_ids_t _ScanPackage_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, ScanPackage_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, ScanPackage_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delivery_interfaces__srv__ScanPackage_Response__get_type_hash,
  &delivery_interfaces__srv__ScanPackage_Response__get_type_description,
  &delivery_interfaces__srv__ScanPackage_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Response>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::ScanPackage_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, ScanPackage_Response)() {
  return get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Response>();
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
// #include "delivery_interfaces/srv/detail/scan_package__functions.h"
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__struct.hpp"
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

typedef struct _ScanPackage_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_Event_type_support_ids_t;

static const _ScanPackage_Event_type_support_ids_t _ScanPackage_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, ScanPackage_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, ScanPackage_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delivery_interfaces__srv__ScanPackage_Event__get_type_hash,
  &delivery_interfaces__srv__ScanPackage_Event__get_type_description,
  &delivery_interfaces__srv__ScanPackage_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Event>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::ScanPackage_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, ScanPackage_Event)() {
  return get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Event>();
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
// #include "delivery_interfaces/srv/detail/scan_package__struct.hpp"
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

typedef struct _ScanPackage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScanPackage_type_support_ids_t;

static const _ScanPackage_type_support_ids_t _ScanPackage_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delivery_interfaces, srv, ScanPackage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delivery_interfaces, srv, ScanPackage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScanPackage_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delivery_interfaces::srv::ScanPackage_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<delivery_interfaces::srv::ScanPackage>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<delivery_interfaces::srv::ScanPackage>,
  &delivery_interfaces__srv__ScanPackage__get_type_hash,
  &delivery_interfaces__srv__ScanPackage__get_type_description,
  &delivery_interfaces__srv__ScanPackage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace delivery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<delivery_interfaces::srv::ScanPackage>()
{
  return &::delivery_interfaces::srv::rosidl_typesupport_cpp::ScanPackage_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, delivery_interfaces, srv, ScanPackage)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<delivery_interfaces::srv::ScanPackage>();
}

#ifdef __cplusplus
}
#endif
