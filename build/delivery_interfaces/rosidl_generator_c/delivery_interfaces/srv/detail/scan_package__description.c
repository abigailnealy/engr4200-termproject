// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from delivery_interfaces:srv/ScanPackage.idl
// generated code does not contain a copyright notice

#include "delivery_interfaces/srv/detail/scan_package__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_delivery_interfaces
const rosidl_type_hash_t *
delivery_interfaces__srv__ScanPackage__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0x60, 0xae, 0x44, 0x2a, 0xb5, 0xcb, 0x68,
      0x6e, 0xff, 0x2b, 0xaf, 0x32, 0x23, 0x55, 0x11,
      0xf9, 0xa3, 0x65, 0xf5, 0x74, 0x1e, 0x89, 0xff,
      0x27, 0xef, 0x8c, 0x03, 0x5a, 0xdd, 0xc8, 0xde,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_delivery_interfaces
const rosidl_type_hash_t *
delivery_interfaces__srv__ScanPackage_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0xa3, 0x30, 0x1a, 0xf6, 0x77, 0x86, 0x89,
      0x62, 0xb1, 0x31, 0xd9, 0x5d, 0x6a, 0xd1, 0xdf,
      0xbe, 0x30, 0x37, 0xb5, 0xb1, 0x31, 0x96, 0xee,
      0x31, 0x98, 0xf2, 0x27, 0xe7, 0x72, 0x54, 0x42,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_delivery_interfaces
const rosidl_type_hash_t *
delivery_interfaces__srv__ScanPackage_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0xd1, 0x1d, 0x1a, 0xd6, 0x56, 0xc4, 0xb3,
      0xcb, 0xa5, 0xee, 0xb3, 0x53, 0x95, 0xbb, 0x7d,
      0xa0, 0x3f, 0x33, 0x76, 0x5c, 0xb2, 0x3a, 0x94,
      0x9f, 0x94, 0xc0, 0x69, 0x62, 0x78, 0x1b, 0xbd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_delivery_interfaces
const rosidl_type_hash_t *
delivery_interfaces__srv__ScanPackage_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x39, 0xae, 0x5f, 0x92, 0x14, 0xa3, 0x30,
      0x4c, 0x6b, 0x5c, 0x73, 0x7b, 0x4a, 0x34, 0xcd,
      0x73, 0x16, 0xc0, 0x35, 0x78, 0x73, 0xe2, 0x3f,
      0xf9, 0x93, 0xbf, 0xb0, 0x53, 0x7f, 0x23, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char delivery_interfaces__srv__ScanPackage__TYPE_NAME[] = "delivery_interfaces/srv/ScanPackage";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char delivery_interfaces__srv__ScanPackage_Event__TYPE_NAME[] = "delivery_interfaces/srv/ScanPackage_Event";
static char delivery_interfaces__srv__ScanPackage_Request__TYPE_NAME[] = "delivery_interfaces/srv/ScanPackage_Request";
static char delivery_interfaces__srv__ScanPackage_Response__TYPE_NAME[] = "delivery_interfaces/srv/ScanPackage_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char delivery_interfaces__srv__ScanPackage__FIELD_NAME__request_message[] = "request_message";
static char delivery_interfaces__srv__ScanPackage__FIELD_NAME__response_message[] = "response_message";
static char delivery_interfaces__srv__ScanPackage__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field delivery_interfaces__srv__ScanPackage__FIELDS[] = {
  {
    {delivery_interfaces__srv__ScanPackage__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {delivery_interfaces__srv__ScanPackage_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {delivery_interfaces__srv__ScanPackage_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {delivery_interfaces__srv__ScanPackage_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription delivery_interfaces__srv__ScanPackage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delivery_interfaces__srv__ScanPackage__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delivery_interfaces__srv__ScanPackage__TYPE_NAME, 35, 35},
      {delivery_interfaces__srv__ScanPackage__FIELDS, 3, 3},
    },
    {delivery_interfaces__srv__ScanPackage__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = delivery_interfaces__srv__ScanPackage_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = delivery_interfaces__srv__ScanPackage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = delivery_interfaces__srv__ScanPackage_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char delivery_interfaces__srv__ScanPackage_Request__FIELD_NAME__trigger[] = "trigger";

static rosidl_runtime_c__type_description__Field delivery_interfaces__srv__ScanPackage_Request__FIELDS[] = {
  {
    {delivery_interfaces__srv__ScanPackage_Request__FIELD_NAME__trigger, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delivery_interfaces__srv__ScanPackage_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delivery_interfaces__srv__ScanPackage_Request__TYPE_NAME, 43, 43},
      {delivery_interfaces__srv__ScanPackage_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char delivery_interfaces__srv__ScanPackage_Response__FIELD_NAME__dropoff_id[] = "dropoff_id";
static char delivery_interfaces__srv__ScanPackage_Response__FIELD_NAME__success[] = "success";
static char delivery_interfaces__srv__ScanPackage_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field delivery_interfaces__srv__ScanPackage_Response__FIELDS[] = {
  {
    {delivery_interfaces__srv__ScanPackage_Response__FIELD_NAME__dropoff_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delivery_interfaces__srv__ScanPackage_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delivery_interfaces__srv__ScanPackage_Response__TYPE_NAME, 44, 44},
      {delivery_interfaces__srv__ScanPackage_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char delivery_interfaces__srv__ScanPackage_Event__FIELD_NAME__info[] = "info";
static char delivery_interfaces__srv__ScanPackage_Event__FIELD_NAME__request[] = "request";
static char delivery_interfaces__srv__ScanPackage_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field delivery_interfaces__srv__ScanPackage_Event__FIELDS[] = {
  {
    {delivery_interfaces__srv__ScanPackage_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {delivery_interfaces__srv__ScanPackage_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {delivery_interfaces__srv__ScanPackage_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription delivery_interfaces__srv__ScanPackage_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {delivery_interfaces__srv__ScanPackage_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delivery_interfaces__srv__ScanPackage_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delivery_interfaces__srv__ScanPackage_Event__TYPE_NAME, 41, 41},
      {delivery_interfaces__srv__ScanPackage_Event__FIELDS, 3, 3},
    },
    {delivery_interfaces__srv__ScanPackage_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = delivery_interfaces__srv__ScanPackage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = delivery_interfaces__srv__ScanPackage_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool trigger\n"
  "---\n"
  "string dropoff_id\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
delivery_interfaces__srv__ScanPackage__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delivery_interfaces__srv__ScanPackage__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 63, 63},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
delivery_interfaces__srv__ScanPackage_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delivery_interfaces__srv__ScanPackage_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
delivery_interfaces__srv__ScanPackage_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delivery_interfaces__srv__ScanPackage_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
delivery_interfaces__srv__ScanPackage_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delivery_interfaces__srv__ScanPackage_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delivery_interfaces__srv__ScanPackage__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delivery_interfaces__srv__ScanPackage__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *delivery_interfaces__srv__ScanPackage_Event__get_individual_type_description_source(NULL);
    sources[3] = *delivery_interfaces__srv__ScanPackage_Request__get_individual_type_description_source(NULL);
    sources[4] = *delivery_interfaces__srv__ScanPackage_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delivery_interfaces__srv__ScanPackage_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delivery_interfaces__srv__ScanPackage_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delivery_interfaces__srv__ScanPackage_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delivery_interfaces__srv__ScanPackage_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delivery_interfaces__srv__ScanPackage_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delivery_interfaces__srv__ScanPackage_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *delivery_interfaces__srv__ScanPackage_Request__get_individual_type_description_source(NULL);
    sources[3] = *delivery_interfaces__srv__ScanPackage_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
