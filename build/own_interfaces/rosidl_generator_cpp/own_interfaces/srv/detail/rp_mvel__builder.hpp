// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__SRV__DETAIL__RP_MVEL__BUILDER_HPP_
#define OWN_INTERFACES__SRV__DETAIL__RP_MVEL__BUILDER_HPP_

#include "own_interfaces/srv/detail/rp_mvel__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace own_interfaces
{

namespace srv
{

namespace builder
{

class Init_RPMvel_Request_r
{
public:
  explicit Init_RPMvel_Request_r(::own_interfaces::srv::RPMvel_Request & msg)
  : msg_(msg)
  {}
  ::own_interfaces::srv::RPMvel_Request r(::own_interfaces::srv::RPMvel_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::own_interfaces::srv::RPMvel_Request msg_;
};

class Init_RPMvel_Request_rpm
{
public:
  Init_RPMvel_Request_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RPMvel_Request_r rpm(::own_interfaces::srv::RPMvel_Request::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_RPMvel_Request_r(msg_);
  }

private:
  ::own_interfaces::srv::RPMvel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::own_interfaces::srv::RPMvel_Request>()
{
  return own_interfaces::srv::builder::Init_RPMvel_Request_rpm();
}

}  // namespace own_interfaces


namespace own_interfaces
{

namespace srv
{

namespace builder
{

class Init_RPMvel_Response_vel
{
public:
  Init_RPMvel_Response_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::own_interfaces::srv::RPMvel_Response vel(::own_interfaces::srv::RPMvel_Response::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::own_interfaces::srv::RPMvel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::own_interfaces::srv::RPMvel_Response>()
{
  return own_interfaces::srv::builder::Init_RPMvel_Response_vel();
}

}  // namespace own_interfaces

#endif  // OWN_INTERFACES__SRV__DETAIL__RP_MVEL__BUILDER_HPP_
