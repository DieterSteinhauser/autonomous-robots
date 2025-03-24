// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "clearpath_platform_msgs/msg/detail/lights__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace clearpath_platform_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Lights_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) clearpath_platform_msgs::msg::Lights(_init);
}

void Lights_fini_function(void * message_memory)
{
  auto typed_message = static_cast<clearpath_platform_msgs::msg::Lights *>(message_memory);
  typed_message->~Lights();
}

size_t size_function__Lights__lights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<clearpath_platform_msgs::msg::RGB> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Lights__lights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<clearpath_platform_msgs::msg::RGB> *>(untyped_member);
  return &member[index];
}

void * get_function__Lights__lights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<clearpath_platform_msgs::msg::RGB> *>(untyped_member);
  return &member[index];
}

void fetch_function__Lights__lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const clearpath_platform_msgs::msg::RGB *>(
    get_const_function__Lights__lights(untyped_member, index));
  auto & value = *reinterpret_cast<clearpath_platform_msgs::msg::RGB *>(untyped_value);
  value = item;
}

void assign_function__Lights__lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<clearpath_platform_msgs::msg::RGB *>(
    get_function__Lights__lights(untyped_member, index));
  const auto & value = *reinterpret_cast<const clearpath_platform_msgs::msg::RGB *>(untyped_value);
  item = value;
}

void resize_function__Lights__lights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<clearpath_platform_msgs::msg::RGB> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Lights_message_member_array[1] = {
  {
    "lights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<clearpath_platform_msgs::msg::RGB>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::Lights, lights),  // bytes offset in struct
    nullptr,  // default value
    size_function__Lights__lights,  // size() function pointer
    get_const_function__Lights__lights,  // get_const(index) function pointer
    get_function__Lights__lights,  // get(index) function pointer
    fetch_function__Lights__lights,  // fetch(index, &value) function pointer
    assign_function__Lights__lights,  // assign(index, value) function pointer
    resize_function__Lights__lights  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Lights_message_members = {
  "clearpath_platform_msgs::msg",  // message namespace
  "Lights",  // message name
  1,  // number of fields
  sizeof(clearpath_platform_msgs::msg::Lights),
  Lights_message_member_array,  // message members
  Lights_init_function,  // function to initialize message memory (memory has to be allocated)
  Lights_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Lights_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Lights_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace clearpath_platform_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_platform_msgs::msg::Lights>()
{
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::Lights_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_platform_msgs, msg, Lights)() {
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::Lights_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
