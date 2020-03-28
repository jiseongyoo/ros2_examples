// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:action/ActionInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__ACTION_INTERFACE_EXAMPLE__TRAITS_HPP_
#define INTERFACES__ACTION__ACTION_INTERFACE_EXAMPLE__TRAITS_HPP_

#include "interfaces/action/action_interface_example__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_Goal>()
{
  return "interfaces::action::ActionInterfaceExample_Goal";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_Result>()
{
  return "interfaces::action::ActionInterfaceExample_Result";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_Feedback>()
{
  return "interfaces::action::ActionInterfaceExample_Feedback";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "interfaces/action/action_interface_example__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_SendGoal_Request>()
{
  return "interfaces::action::ActionInterfaceExample_SendGoal_Request";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::ActionInterfaceExample_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActionInterfaceExample_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_SendGoal_Response>()
{
  return "interfaces::action::ActionInterfaceExample_SendGoal_Response";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_SendGoal>()
{
  return "interfaces::action::ActionInterfaceExample_SendGoal";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::ActionInterfaceExample_SendGoal_Request>::value &&
    has_fixed_size<interfaces::action::ActionInterfaceExample_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::ActionInterfaceExample_SendGoal_Request>::value &&
    has_bounded_size<interfaces::action::ActionInterfaceExample_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::ActionInterfaceExample_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::ActionInterfaceExample_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::ActionInterfaceExample_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_GetResult_Request>()
{
  return "interfaces::action::ActionInterfaceExample_GetResult_Request";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/action_interface_example__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_GetResult_Response>()
{
  return "interfaces::action::ActionInterfaceExample_GetResult_Response";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::ActionInterfaceExample_Result>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActionInterfaceExample_Result>::value> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_GetResult>()
{
  return "interfaces::action::ActionInterfaceExample_GetResult";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::ActionInterfaceExample_GetResult_Request>::value &&
    has_fixed_size<interfaces::action::ActionInterfaceExample_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::ActionInterfaceExample_GetResult_Request>::value &&
    has_bounded_size<interfaces::action::ActionInterfaceExample_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::ActionInterfaceExample_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::ActionInterfaceExample_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::ActionInterfaceExample_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "interfaces/action/action_interface_example__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActionInterfaceExample_FeedbackMessage>()
{
  return "interfaces::action::ActionInterfaceExample_FeedbackMessage";
}

template<>
struct has_fixed_size<interfaces::action::ActionInterfaceExample_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::ActionInterfaceExample_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActionInterfaceExample_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActionInterfaceExample_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::ActionInterfaceExample_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interfaces::action::ActionInterfaceExample>
  : std::true_type
{
};

template<>
struct is_action_goal<interfaces::action::ActionInterfaceExample_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interfaces::action::ActionInterfaceExample_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interfaces::action::ActionInterfaceExample_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACES__ACTION__ACTION_INTERFACE_EXAMPLE__TRAITS_HPP_
