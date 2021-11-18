// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from own_interfaces:srv/RPMvel.idl
// generated code does not contain a copyright notice

#ifndef OWN_INTERFACES__SRV__DETAIL__RP_MVEL__FUNCTIONS_H_
#define OWN_INTERFACES__SRV__DETAIL__RP_MVEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "own_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "own_interfaces/srv/detail/rp_mvel__struct.h"

/// Initialize srv/RPMvel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * own_interfaces__srv__RPMvel_Request
 * )) before or use
 * own_interfaces__srv__RPMvel_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
bool
own_interfaces__srv__RPMvel_Request__init(own_interfaces__srv__RPMvel_Request * msg);

/// Finalize srv/RPMvel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Request__fini(own_interfaces__srv__RPMvel_Request * msg);

/// Create srv/RPMvel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * own_interfaces__srv__RPMvel_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
own_interfaces__srv__RPMvel_Request *
own_interfaces__srv__RPMvel_Request__create();

/// Destroy srv/RPMvel message.
/**
 * It calls
 * own_interfaces__srv__RPMvel_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Request__destroy(own_interfaces__srv__RPMvel_Request * msg);


/// Initialize array of srv/RPMvel messages.
/**
 * It allocates the memory for the number of elements and calls
 * own_interfaces__srv__RPMvel_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
bool
own_interfaces__srv__RPMvel_Request__Sequence__init(own_interfaces__srv__RPMvel_Request__Sequence * array, size_t size);

/// Finalize array of srv/RPMvel messages.
/**
 * It calls
 * own_interfaces__srv__RPMvel_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Request__Sequence__fini(own_interfaces__srv__RPMvel_Request__Sequence * array);

/// Create array of srv/RPMvel messages.
/**
 * It allocates the memory for the array and calls
 * own_interfaces__srv__RPMvel_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
own_interfaces__srv__RPMvel_Request__Sequence *
own_interfaces__srv__RPMvel_Request__Sequence__create(size_t size);

/// Destroy array of srv/RPMvel messages.
/**
 * It calls
 * own_interfaces__srv__RPMvel_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Request__Sequence__destroy(own_interfaces__srv__RPMvel_Request__Sequence * array);

/// Initialize srv/RPMvel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * own_interfaces__srv__RPMvel_Response
 * )) before or use
 * own_interfaces__srv__RPMvel_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
bool
own_interfaces__srv__RPMvel_Response__init(own_interfaces__srv__RPMvel_Response * msg);

/// Finalize srv/RPMvel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Response__fini(own_interfaces__srv__RPMvel_Response * msg);

/// Create srv/RPMvel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * own_interfaces__srv__RPMvel_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
own_interfaces__srv__RPMvel_Response *
own_interfaces__srv__RPMvel_Response__create();

/// Destroy srv/RPMvel message.
/**
 * It calls
 * own_interfaces__srv__RPMvel_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Response__destroy(own_interfaces__srv__RPMvel_Response * msg);


/// Initialize array of srv/RPMvel messages.
/**
 * It allocates the memory for the number of elements and calls
 * own_interfaces__srv__RPMvel_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
bool
own_interfaces__srv__RPMvel_Response__Sequence__init(own_interfaces__srv__RPMvel_Response__Sequence * array, size_t size);

/// Finalize array of srv/RPMvel messages.
/**
 * It calls
 * own_interfaces__srv__RPMvel_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Response__Sequence__fini(own_interfaces__srv__RPMvel_Response__Sequence * array);

/// Create array of srv/RPMvel messages.
/**
 * It allocates the memory for the array and calls
 * own_interfaces__srv__RPMvel_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
own_interfaces__srv__RPMvel_Response__Sequence *
own_interfaces__srv__RPMvel_Response__Sequence__create(size_t size);

/// Destroy array of srv/RPMvel messages.
/**
 * It calls
 * own_interfaces__srv__RPMvel_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_own_interfaces
void
own_interfaces__srv__RPMvel_Response__Sequence__destroy(own_interfaces__srv__RPMvel_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // OWN_INTERFACES__SRV__DETAIL__RP_MVEL__FUNCTIONS_H_
