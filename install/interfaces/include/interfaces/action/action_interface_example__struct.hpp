// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:action/ActionInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__ACTION_INTERFACE_EXAMPLE__STRUCT_HPP_
#define INTERFACES__ACTION__ACTION_INTERFACE_EXAMPLE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_Goal __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_Goal __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_Goal_
{
  using Type = ActionInterfaceExample_Goal_<ContainerAllocator>;

  explicit ActionInterfaceExample_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->result = "action_result";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->result = "";
    }
  }

  explicit ActionInterfaceExample_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->result = "action_result";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_Goal
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_Goal
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_Goal_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_Goal_

// alias to use template instance with default allocator
using ActionInterfaceExample_Goal =
  interfaces::action::ActionInterfaceExample_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_Result __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_Result __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_Result_
{
  using Type = ActionInterfaceExample_Result_<ContainerAllocator>;

  explicit ActionInterfaceExample_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->goal = "action_goal";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->goal = "";
    }
  }

  explicit ActionInterfaceExample_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->goal = "action_goal";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->goal = "";
    }
  }

  // field types and members
  using _goal_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_Result
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_Result
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_Result_ & other) const
  {
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_Result_

// alias to use template instance with default allocator
using ActionInterfaceExample_Result =
  interfaces::action::ActionInterfaceExample_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_Feedback __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_Feedback_
{
  using Type = ActionInterfaceExample_Feedback_<ContainerAllocator>;

  explicit ActionInterfaceExample_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->feedback = "action_feedback";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->feedback = "";
    }
  }

  explicit ActionInterfaceExample_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->feedback = "action_feedback";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_Feedback
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_Feedback
    std::shared_ptr<interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_Feedback_

// alias to use template instance with default allocator
using ActionInterfaceExample_Feedback =
  interfaces::action::ActionInterfaceExample_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "interfaces/action/action_interface_example__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_SendGoal_Request_
{
  using Type = ActionInterfaceExample_SendGoal_Request_<ContainerAllocator>;

  explicit ActionInterfaceExample_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ActionInterfaceExample_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const interfaces::action::ActionInterfaceExample_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Request
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Request
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_SendGoal_Request_

// alias to use template instance with default allocator
using ActionInterfaceExample_SendGoal_Request =
  interfaces::action::ActionInterfaceExample_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_SendGoal_Response_
{
  using Type = ActionInterfaceExample_SendGoal_Response_<ContainerAllocator>;

  explicit ActionInterfaceExample_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ActionInterfaceExample_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Response
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_SendGoal_Response
    std::shared_ptr<interfaces::action::ActionInterfaceExample_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_SendGoal_Response_

// alias to use template instance with default allocator
using ActionInterfaceExample_SendGoal_Response =
  interfaces::action::ActionInterfaceExample_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct ActionInterfaceExample_SendGoal
{
  using Request = interfaces::action::ActionInterfaceExample_SendGoal_Request;
  using Response = interfaces::action::ActionInterfaceExample_SendGoal_Response;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_GetResult_Request_
{
  using Type = ActionInterfaceExample_GetResult_Request_<ContainerAllocator>;

  explicit ActionInterfaceExample_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ActionInterfaceExample_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Request
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Request
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_GetResult_Request_

// alias to use template instance with default allocator
using ActionInterfaceExample_GetResult_Request =
  interfaces::action::ActionInterfaceExample_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/action_interface_example__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_GetResult_Response_
{
  using Type = ActionInterfaceExample_GetResult_Response_<ContainerAllocator>;

  explicit ActionInterfaceExample_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ActionInterfaceExample_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const interfaces::action::ActionInterfaceExample_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Response
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_GetResult_Response
    std::shared_ptr<interfaces::action::ActionInterfaceExample_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_GetResult_Response_

// alias to use template instance with default allocator
using ActionInterfaceExample_GetResult_Response =
  interfaces::action::ActionInterfaceExample_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct ActionInterfaceExample_GetResult
{
  using Request = interfaces::action::ActionInterfaceExample_GetResult_Request;
  using Response = interfaces::action::ActionInterfaceExample_GetResult_Response;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "interfaces/action/action_interface_example__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActionInterfaceExample_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActionInterfaceExample_FeedbackMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionInterfaceExample_FeedbackMessage_
{
  using Type = ActionInterfaceExample_FeedbackMessage_<ContainerAllocator>;

  explicit ActionInterfaceExample_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ActionInterfaceExample_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const interfaces::action::ActionInterfaceExample_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_FeedbackMessage
    std::shared_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActionInterfaceExample_FeedbackMessage
    std::shared_ptr<interfaces::action::ActionInterfaceExample_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionInterfaceExample_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionInterfaceExample_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionInterfaceExample_FeedbackMessage_

// alias to use template instance with default allocator
using ActionInterfaceExample_FeedbackMessage =
  interfaces::action::ActionInterfaceExample_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace interfaces
{

namespace action
{

struct ActionInterfaceExample
{
  /// The goal message defined in the action definition.
  using Goal = interfaces::action::ActionInterfaceExample_Goal;
  /// The result message defined in the action definition.
  using Result = interfaces::action::ActionInterfaceExample_Result;
  /// The feedback message defined in the action definition.
  using Feedback = interfaces::action::ActionInterfaceExample_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = interfaces::action::ActionInterfaceExample_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = interfaces::action::ActionInterfaceExample_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = interfaces::action::ActionInterfaceExample_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ActionInterfaceExample ActionInterfaceExample;

}  // namespace action

}  // namespace interfaces

#endif  // INTERFACES__ACTION__ACTION_INTERFACE_EXAMPLE__STRUCT_HPP_
