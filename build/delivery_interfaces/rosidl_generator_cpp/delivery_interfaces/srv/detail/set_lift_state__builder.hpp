// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delivery_interfaces:srv/SetLiftState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_interfaces/srv/set_lift_state.hpp"


#ifndef DELIVERY_INTERFACES__SRV__DETAIL__SET_LIFT_STATE__BUILDER_HPP_
#define DELIVERY_INTERFACES__SRV__DETAIL__SET_LIFT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delivery_interfaces/srv/detail/set_lift_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delivery_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLiftState_Request_target_state
{
public:
  Init_SetLiftState_Request_target_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::delivery_interfaces::srv::SetLiftState_Request target_state(::delivery_interfaces::srv::SetLiftState_Request::_target_state_type arg)
  {
    msg_.target_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_interfaces::srv::SetLiftState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_interfaces::srv::SetLiftState_Request>()
{
  return delivery_interfaces::srv::builder::Init_SetLiftState_Request_target_state();
}

}  // namespace delivery_interfaces


namespace delivery_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLiftState_Response_message
{
public:
  explicit Init_SetLiftState_Response_message(::delivery_interfaces::srv::SetLiftState_Response & msg)
  : msg_(msg)
  {}
  ::delivery_interfaces::srv::SetLiftState_Response message(::delivery_interfaces::srv::SetLiftState_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_interfaces::srv::SetLiftState_Response msg_;
};

class Init_SetLiftState_Response_success
{
public:
  Init_SetLiftState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLiftState_Response_message success(::delivery_interfaces::srv::SetLiftState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLiftState_Response_message(msg_);
  }

private:
  ::delivery_interfaces::srv::SetLiftState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_interfaces::srv::SetLiftState_Response>()
{
  return delivery_interfaces::srv::builder::Init_SetLiftState_Response_success();
}

}  // namespace delivery_interfaces


namespace delivery_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLiftState_Event_response
{
public:
  explicit Init_SetLiftState_Event_response(::delivery_interfaces::srv::SetLiftState_Event & msg)
  : msg_(msg)
  {}
  ::delivery_interfaces::srv::SetLiftState_Event response(::delivery_interfaces::srv::SetLiftState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_interfaces::srv::SetLiftState_Event msg_;
};

class Init_SetLiftState_Event_request
{
public:
  explicit Init_SetLiftState_Event_request(::delivery_interfaces::srv::SetLiftState_Event & msg)
  : msg_(msg)
  {}
  Init_SetLiftState_Event_response request(::delivery_interfaces::srv::SetLiftState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLiftState_Event_response(msg_);
  }

private:
  ::delivery_interfaces::srv::SetLiftState_Event msg_;
};

class Init_SetLiftState_Event_info
{
public:
  Init_SetLiftState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLiftState_Event_request info(::delivery_interfaces::srv::SetLiftState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLiftState_Event_request(msg_);
  }

private:
  ::delivery_interfaces::srv::SetLiftState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_interfaces::srv::SetLiftState_Event>()
{
  return delivery_interfaces::srv::builder::Init_SetLiftState_Event_info();
}

}  // namespace delivery_interfaces

#endif  // DELIVERY_INTERFACES__SRV__DETAIL__SET_LIFT_STATE__BUILDER_HPP_
