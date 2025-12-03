// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delivery_interfaces:srv/ScanPackage.idl
// generated code does not contain a copyright notice
#include "delivery_interfaces/srv/detail/scan_package__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
delivery_interfaces__srv__ScanPackage_Request__init(delivery_interfaces__srv__ScanPackage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // trigger
  return true;
}

void
delivery_interfaces__srv__ScanPackage_Request__fini(delivery_interfaces__srv__ScanPackage_Request * msg)
{
  if (!msg) {
    return;
  }
  // trigger
}

bool
delivery_interfaces__srv__ScanPackage_Request__are_equal(const delivery_interfaces__srv__ScanPackage_Request * lhs, const delivery_interfaces__srv__ScanPackage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trigger
  if (lhs->trigger != rhs->trigger) {
    return false;
  }
  return true;
}

bool
delivery_interfaces__srv__ScanPackage_Request__copy(
  const delivery_interfaces__srv__ScanPackage_Request * input,
  delivery_interfaces__srv__ScanPackage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // trigger
  output->trigger = input->trigger;
  return true;
}

delivery_interfaces__srv__ScanPackage_Request *
delivery_interfaces__srv__ScanPackage_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Request * msg = (delivery_interfaces__srv__ScanPackage_Request *)allocator.allocate(sizeof(delivery_interfaces__srv__ScanPackage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delivery_interfaces__srv__ScanPackage_Request));
  bool success = delivery_interfaces__srv__ScanPackage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delivery_interfaces__srv__ScanPackage_Request__destroy(delivery_interfaces__srv__ScanPackage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delivery_interfaces__srv__ScanPackage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delivery_interfaces__srv__ScanPackage_Request__Sequence__init(delivery_interfaces__srv__ScanPackage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Request * data = NULL;

  if (size) {
    data = (delivery_interfaces__srv__ScanPackage_Request *)allocator.zero_allocate(size, sizeof(delivery_interfaces__srv__ScanPackage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delivery_interfaces__srv__ScanPackage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delivery_interfaces__srv__ScanPackage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delivery_interfaces__srv__ScanPackage_Request__Sequence__fini(delivery_interfaces__srv__ScanPackage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delivery_interfaces__srv__ScanPackage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delivery_interfaces__srv__ScanPackage_Request__Sequence *
delivery_interfaces__srv__ScanPackage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Request__Sequence * array = (delivery_interfaces__srv__ScanPackage_Request__Sequence *)allocator.allocate(sizeof(delivery_interfaces__srv__ScanPackage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delivery_interfaces__srv__ScanPackage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delivery_interfaces__srv__ScanPackage_Request__Sequence__destroy(delivery_interfaces__srv__ScanPackage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delivery_interfaces__srv__ScanPackage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delivery_interfaces__srv__ScanPackage_Request__Sequence__are_equal(const delivery_interfaces__srv__ScanPackage_Request__Sequence * lhs, const delivery_interfaces__srv__ScanPackage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delivery_interfaces__srv__ScanPackage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delivery_interfaces__srv__ScanPackage_Request__Sequence__copy(
  const delivery_interfaces__srv__ScanPackage_Request__Sequence * input,
  delivery_interfaces__srv__ScanPackage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delivery_interfaces__srv__ScanPackage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delivery_interfaces__srv__ScanPackage_Request * data =
      (delivery_interfaces__srv__ScanPackage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delivery_interfaces__srv__ScanPackage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delivery_interfaces__srv__ScanPackage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delivery_interfaces__srv__ScanPackage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `dropoff_id`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
delivery_interfaces__srv__ScanPackage_Response__init(delivery_interfaces__srv__ScanPackage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // dropoff_id
  if (!rosidl_runtime_c__String__init(&msg->dropoff_id)) {
    delivery_interfaces__srv__ScanPackage_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    delivery_interfaces__srv__ScanPackage_Response__fini(msg);
    return false;
  }
  return true;
}

void
delivery_interfaces__srv__ScanPackage_Response__fini(delivery_interfaces__srv__ScanPackage_Response * msg)
{
  if (!msg) {
    return;
  }
  // dropoff_id
  rosidl_runtime_c__String__fini(&msg->dropoff_id);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
delivery_interfaces__srv__ScanPackage_Response__are_equal(const delivery_interfaces__srv__ScanPackage_Response * lhs, const delivery_interfaces__srv__ScanPackage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dropoff_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dropoff_id), &(rhs->dropoff_id)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
delivery_interfaces__srv__ScanPackage_Response__copy(
  const delivery_interfaces__srv__ScanPackage_Response * input,
  delivery_interfaces__srv__ScanPackage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // dropoff_id
  if (!rosidl_runtime_c__String__copy(
      &(input->dropoff_id), &(output->dropoff_id)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

delivery_interfaces__srv__ScanPackage_Response *
delivery_interfaces__srv__ScanPackage_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Response * msg = (delivery_interfaces__srv__ScanPackage_Response *)allocator.allocate(sizeof(delivery_interfaces__srv__ScanPackage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delivery_interfaces__srv__ScanPackage_Response));
  bool success = delivery_interfaces__srv__ScanPackage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delivery_interfaces__srv__ScanPackage_Response__destroy(delivery_interfaces__srv__ScanPackage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delivery_interfaces__srv__ScanPackage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delivery_interfaces__srv__ScanPackage_Response__Sequence__init(delivery_interfaces__srv__ScanPackage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Response * data = NULL;

  if (size) {
    data = (delivery_interfaces__srv__ScanPackage_Response *)allocator.zero_allocate(size, sizeof(delivery_interfaces__srv__ScanPackage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delivery_interfaces__srv__ScanPackage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delivery_interfaces__srv__ScanPackage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delivery_interfaces__srv__ScanPackage_Response__Sequence__fini(delivery_interfaces__srv__ScanPackage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delivery_interfaces__srv__ScanPackage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delivery_interfaces__srv__ScanPackage_Response__Sequence *
delivery_interfaces__srv__ScanPackage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Response__Sequence * array = (delivery_interfaces__srv__ScanPackage_Response__Sequence *)allocator.allocate(sizeof(delivery_interfaces__srv__ScanPackage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delivery_interfaces__srv__ScanPackage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delivery_interfaces__srv__ScanPackage_Response__Sequence__destroy(delivery_interfaces__srv__ScanPackage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delivery_interfaces__srv__ScanPackage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delivery_interfaces__srv__ScanPackage_Response__Sequence__are_equal(const delivery_interfaces__srv__ScanPackage_Response__Sequence * lhs, const delivery_interfaces__srv__ScanPackage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delivery_interfaces__srv__ScanPackage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delivery_interfaces__srv__ScanPackage_Response__Sequence__copy(
  const delivery_interfaces__srv__ScanPackage_Response__Sequence * input,
  delivery_interfaces__srv__ScanPackage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delivery_interfaces__srv__ScanPackage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delivery_interfaces__srv__ScanPackage_Response * data =
      (delivery_interfaces__srv__ScanPackage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delivery_interfaces__srv__ScanPackage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delivery_interfaces__srv__ScanPackage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delivery_interfaces__srv__ScanPackage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "delivery_interfaces/srv/detail/scan_package__functions.h"

bool
delivery_interfaces__srv__ScanPackage_Event__init(delivery_interfaces__srv__ScanPackage_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    delivery_interfaces__srv__ScanPackage_Event__fini(msg);
    return false;
  }
  // request
  if (!delivery_interfaces__srv__ScanPackage_Request__Sequence__init(&msg->request, 0)) {
    delivery_interfaces__srv__ScanPackage_Event__fini(msg);
    return false;
  }
  // response
  if (!delivery_interfaces__srv__ScanPackage_Response__Sequence__init(&msg->response, 0)) {
    delivery_interfaces__srv__ScanPackage_Event__fini(msg);
    return false;
  }
  return true;
}

void
delivery_interfaces__srv__ScanPackage_Event__fini(delivery_interfaces__srv__ScanPackage_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  delivery_interfaces__srv__ScanPackage_Request__Sequence__fini(&msg->request);
  // response
  delivery_interfaces__srv__ScanPackage_Response__Sequence__fini(&msg->response);
}

bool
delivery_interfaces__srv__ScanPackage_Event__are_equal(const delivery_interfaces__srv__ScanPackage_Event * lhs, const delivery_interfaces__srv__ScanPackage_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!delivery_interfaces__srv__ScanPackage_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!delivery_interfaces__srv__ScanPackage_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
delivery_interfaces__srv__ScanPackage_Event__copy(
  const delivery_interfaces__srv__ScanPackage_Event * input,
  delivery_interfaces__srv__ScanPackage_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!delivery_interfaces__srv__ScanPackage_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!delivery_interfaces__srv__ScanPackage_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

delivery_interfaces__srv__ScanPackage_Event *
delivery_interfaces__srv__ScanPackage_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Event * msg = (delivery_interfaces__srv__ScanPackage_Event *)allocator.allocate(sizeof(delivery_interfaces__srv__ScanPackage_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delivery_interfaces__srv__ScanPackage_Event));
  bool success = delivery_interfaces__srv__ScanPackage_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delivery_interfaces__srv__ScanPackage_Event__destroy(delivery_interfaces__srv__ScanPackage_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delivery_interfaces__srv__ScanPackage_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delivery_interfaces__srv__ScanPackage_Event__Sequence__init(delivery_interfaces__srv__ScanPackage_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Event * data = NULL;

  if (size) {
    data = (delivery_interfaces__srv__ScanPackage_Event *)allocator.zero_allocate(size, sizeof(delivery_interfaces__srv__ScanPackage_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delivery_interfaces__srv__ScanPackage_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delivery_interfaces__srv__ScanPackage_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delivery_interfaces__srv__ScanPackage_Event__Sequence__fini(delivery_interfaces__srv__ScanPackage_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delivery_interfaces__srv__ScanPackage_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delivery_interfaces__srv__ScanPackage_Event__Sequence *
delivery_interfaces__srv__ScanPackage_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delivery_interfaces__srv__ScanPackage_Event__Sequence * array = (delivery_interfaces__srv__ScanPackage_Event__Sequence *)allocator.allocate(sizeof(delivery_interfaces__srv__ScanPackage_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delivery_interfaces__srv__ScanPackage_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delivery_interfaces__srv__ScanPackage_Event__Sequence__destroy(delivery_interfaces__srv__ScanPackage_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delivery_interfaces__srv__ScanPackage_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delivery_interfaces__srv__ScanPackage_Event__Sequence__are_equal(const delivery_interfaces__srv__ScanPackage_Event__Sequence * lhs, const delivery_interfaces__srv__ScanPackage_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delivery_interfaces__srv__ScanPackage_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delivery_interfaces__srv__ScanPackage_Event__Sequence__copy(
  const delivery_interfaces__srv__ScanPackage_Event__Sequence * input,
  delivery_interfaces__srv__ScanPackage_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delivery_interfaces__srv__ScanPackage_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delivery_interfaces__srv__ScanPackage_Event * data =
      (delivery_interfaces__srv__ScanPackage_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delivery_interfaces__srv__ScanPackage_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delivery_interfaces__srv__ScanPackage_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delivery_interfaces__srv__ScanPackage_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
