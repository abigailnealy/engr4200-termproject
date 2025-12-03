// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delivery_interfaces:srv/ScanPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delivery_interfaces/srv/scan_package.hpp"


#ifndef DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__BUILDER_HPP_
#define DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delivery_interfaces/srv/detail/scan_package__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delivery_interfaces
{

namespace srv
{

namespace builder
{

class Init_ScanPackage_Request_trigger
{
public:
  Init_ScanPackage_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::delivery_interfaces::srv::ScanPackage_Request trigger(::delivery_interfaces::srv::ScanPackage_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_interfaces::srv::ScanPackage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_interfaces::srv::ScanPackage_Request>()
{
  return delivery_interfaces::srv::builder::Init_ScanPackage_Request_trigger();
}

}  // namespace delivery_interfaces


namespace delivery_interfaces
{

namespace srv
{

namespace builder
{

class Init_ScanPackage_Response_message
{
public:
  explicit Init_ScanPackage_Response_message(::delivery_interfaces::srv::ScanPackage_Response & msg)
  : msg_(msg)
  {}
  ::delivery_interfaces::srv::ScanPackage_Response message(::delivery_interfaces::srv::ScanPackage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_interfaces::srv::ScanPackage_Response msg_;
};

class Init_ScanPackage_Response_success
{
public:
  explicit Init_ScanPackage_Response_success(::delivery_interfaces::srv::ScanPackage_Response & msg)
  : msg_(msg)
  {}
  Init_ScanPackage_Response_message success(::delivery_interfaces::srv::ScanPackage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ScanPackage_Response_message(msg_);
  }

private:
  ::delivery_interfaces::srv::ScanPackage_Response msg_;
};

class Init_ScanPackage_Response_dropoff_id
{
public:
  Init_ScanPackage_Response_dropoff_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanPackage_Response_success dropoff_id(::delivery_interfaces::srv::ScanPackage_Response::_dropoff_id_type arg)
  {
    msg_.dropoff_id = std::move(arg);
    return Init_ScanPackage_Response_success(msg_);
  }

private:
  ::delivery_interfaces::srv::ScanPackage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_interfaces::srv::ScanPackage_Response>()
{
  return delivery_interfaces::srv::builder::Init_ScanPackage_Response_dropoff_id();
}

}  // namespace delivery_interfaces


namespace delivery_interfaces
{

namespace srv
{

namespace builder
{

class Init_ScanPackage_Event_response
{
public:
  explicit Init_ScanPackage_Event_response(::delivery_interfaces::srv::ScanPackage_Event & msg)
  : msg_(msg)
  {}
  ::delivery_interfaces::srv::ScanPackage_Event response(::delivery_interfaces::srv::ScanPackage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delivery_interfaces::srv::ScanPackage_Event msg_;
};

class Init_ScanPackage_Event_request
{
public:
  explicit Init_ScanPackage_Event_request(::delivery_interfaces::srv::ScanPackage_Event & msg)
  : msg_(msg)
  {}
  Init_ScanPackage_Event_response request(::delivery_interfaces::srv::ScanPackage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ScanPackage_Event_response(msg_);
  }

private:
  ::delivery_interfaces::srv::ScanPackage_Event msg_;
};

class Init_ScanPackage_Event_info
{
public:
  Init_ScanPackage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanPackage_Event_request info(::delivery_interfaces::srv::ScanPackage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ScanPackage_Event_request(msg_);
  }

private:
  ::delivery_interfaces::srv::ScanPackage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delivery_interfaces::srv::ScanPackage_Event>()
{
  return delivery_interfaces::srv::builder::Init_ScanPackage_Event_info();
}

}  // namespace delivery_interfaces

#endif  // DELIVERY_INTERFACES__SRV__DETAIL__SCAN_PACKAGE__BUILDER_HPP_
