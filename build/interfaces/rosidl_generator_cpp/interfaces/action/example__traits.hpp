// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:action/Example.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__EXAMPLE__TRAITS_HPP_
#define INTERFACES__ACTION__EXAMPLE__TRAITS_HPP_

#include "interfaces/action/example__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_Goal>()
{
  return "interfaces::action::Example_Goal";
}

template<>
struct has_fixed_size<interfaces::action::Example_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::Example_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::Example_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_Result>()
{
  return "interfaces::action::Example_Result";
}

template<>
struct has_fixed_size<interfaces::action::Example_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::Example_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::Example_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_Feedback>()
{
  return "interfaces::action::Example_Feedback";
}

template<>
struct has_fixed_size<interfaces::action::Example_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::Example_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::Example_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "interfaces/action/example__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_SendGoal_Request>()
{
  return "interfaces::action::Example_SendGoal_Request";
}

template<>
struct has_fixed_size<interfaces::action::Example_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::Example_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::Example_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::Example_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::Example_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_SendGoal_Response>()
{
  return "interfaces::action::Example_SendGoal_Response";
}

template<>
struct has_fixed_size<interfaces::action::Example_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::action::Example_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::action::Example_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_SendGoal>()
{
  return "interfaces::action::Example_SendGoal";
}

template<>
struct has_fixed_size<interfaces::action::Example_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::Example_SendGoal_Request>::value &&
    has_fixed_size<interfaces::action::Example_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::Example_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::Example_SendGoal_Request>::value &&
    has_bounded_size<interfaces::action::Example_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::Example_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::Example_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::Example_SendGoal_Response>
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
inline const char * data_type<interfaces::action::Example_GetResult_Request>()
{
  return "interfaces::action::Example_GetResult_Request";
}

template<>
struct has_fixed_size<interfaces::action::Example_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::Example_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::Example_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/example__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_GetResult_Response>()
{
  return "interfaces::action::Example_GetResult_Response";
}

template<>
struct has_fixed_size<interfaces::action::Example_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::Example_Result>::value> {};

template<>
struct has_bounded_size<interfaces::action::Example_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::Example_Result>::value> {};

template<>
struct is_message<interfaces::action::Example_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_GetResult>()
{
  return "interfaces::action::Example_GetResult";
}

template<>
struct has_fixed_size<interfaces::action::Example_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::Example_GetResult_Request>::value &&
    has_fixed_size<interfaces::action::Example_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::Example_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::Example_GetResult_Request>::value &&
    has_bounded_size<interfaces::action::Example_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::Example_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::Example_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::Example_GetResult_Response>
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
// #include "interfaces/action/example__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::Example_FeedbackMessage>()
{
  return "interfaces::action::Example_FeedbackMessage";
}

template<>
struct has_fixed_size<interfaces::action::Example_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::Example_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::Example_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::Example_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::Example_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interfaces::action::Example>
  : std::true_type
{
};

template<>
struct is_action_goal<interfaces::action::Example_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interfaces::action::Example_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interfaces::action::Example_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACES__ACTION__EXAMPLE__TRAITS_HPP_
