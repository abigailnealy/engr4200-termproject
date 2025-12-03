// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from delivery_interfaces:srv/SetLiftState.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "delivery_interfaces/srv/detail/set_lift_state__struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "delivery_interfaces/srv/detail/set_lift_state__functions.h"
#include "delivery_interfaces/srv/detail/set_lift_state__type_support.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  delivery_interfaces,
  srv,
  SetLiftState
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  delivery_interfaces__srv__SetLiftState_Event * event_msg = (delivery_interfaces__srv__SetLiftState_Event *)(allocator->allocate(sizeof(delivery_interfaces__srv__SetLiftState_Event), allocator->state));
  if (!delivery_interfaces__srv__SetLiftState_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    delivery_interfaces__srv__SetLiftState_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!delivery_interfaces__srv__SetLiftState_Request__copy((const delivery_interfaces__srv__SetLiftState_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    delivery_interfaces__srv__SetLiftState_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!delivery_interfaces__srv__SetLiftState_Response__copy((const delivery_interfaces__srv__SetLiftState_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  delivery_interfaces,
  srv,
  SetLiftState
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  delivery_interfaces__srv__SetLiftState_Event * _event_msg = (delivery_interfaces__srv__SetLiftState_Event *)(event_msg);

  delivery_interfaces__srv__SetLiftState_Event__fini((delivery_interfaces__srv__SetLiftState_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
