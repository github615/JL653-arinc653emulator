/*--------------------------------------------------------------------*/
/* */
/* QUEUING PORT constant and type definitions and management services */
/* */
/*--------------------------------------------------------------------*/
#ifndef APEX_QUEUING
#define APEX_QUEUING

#ifdef __cplusplus
extern "C" {
#endif

#include "apex_types.h"

#define MAX_NUMBER_OF_QUEUING_PORTS SYSTEM_LIMIT_NUMBER_OF_QUEUING_PORTS
typedef NAME_TYPE QUEUING_PORT_NAME_TYPE;
typedef APEX_INTEGER QUEUING_PORT_ID_TYPE;
typedef
struct {
  MESSAGE_RANGE_TYPE NB_MESSAGE;
  MESSAGE_RANGE_TYPE MAX_NB_MESSAGE;
  MESSAGE_SIZE_TYPE MAX_MESSAGE_SIZE;
  PORT_DIRECTION_TYPE PORT_DIRECTION;
  WAITING_RANGE_TYPE WAITING_PROCESSES;
} QUEUING_PORT_STATUS_TYPE;
#define CREATE_QUEUING_PORT(QUEUING_PORT_NAME, MAX_MESSAGE_SIZE, MAX_NB_MESSAGE, PORT_DIRECTION, QUEUING_DISCIPLINE, QUEUING_PORT_ID, RETURN_CODE) JL653_CREATE_QUEUING_PORT(__FILE__, __FUNCTION__, __LINE__, QUEUING_PORT_NAME, MAX_MESSAGE_SIZE, MAX_NB_MESSAGE, PORT_DIRECTION, QUEUING_DISCIPLINE, QUEUING_PORT_ID, RETURN_CODE)
JL653SHELL_API void JL653_CREATE_QUEUING_PORT (
  const char *location_file,
  const char *location_function,
  int location_line,
  /*in */ QUEUING_PORT_NAME_TYPE QUEUING_PORT_NAME,
  /*in */ MESSAGE_SIZE_TYPE MAX_MESSAGE_SIZE,
  /*in */ MESSAGE_RANGE_TYPE MAX_NB_MESSAGE,
  /*in */ PORT_DIRECTION_TYPE PORT_DIRECTION,
  /*in */ QUEUING_DISCIPLINE_TYPE QUEUING_DISCIPLINE,
  /*out*/ QUEUING_PORT_ID_TYPE *QUEUING_PORT_ID,
  /*out*/ RETURN_CODE_TYPE *RETURN_CODE );
#define SEND_QUEUING_MESSAGE(QUEUING_PORT_ID, MESSAGE_ADDR, LENGTH, TIME_OUT, RETURN_CODE) JL653_SEND_QUEUING_MESSAGE(__FILE__, __FUNCTION__, __LINE__, QUEUING_PORT_ID, MESSAGE_ADDR, LENGTH, TIME_OUT, RETURN_CODE)
JL653SHELL_API void JL653_SEND_QUEUING_MESSAGE (
  const char *location_file,
  const char *location_function,
  int location_line,
  /*in */ QUEUING_PORT_ID_TYPE QUEUING_PORT_ID,
  /*in */ MESSAGE_ADDR_TYPE MESSAGE_ADDR, /* by reference */
  /*in */ MESSAGE_SIZE_TYPE LENGTH,
  /*in */ SYSTEM_TIME_TYPE TIME_OUT,
  /*out*/ RETURN_CODE_TYPE *RETURN_CODE);
#define RECEIVE_QUEUING_MESSAGE(QUEUING_PORT_ID, TIME_OUT, MESSAGE_ADDR, LENGTH, RETURN_CODE) JL653_RECEIVE_QUEUING_MESSAGE(__FILE__, __FUNCTION__, __LINE__, QUEUING_PORT_ID, TIME_OUT, MESSAGE_ADDR, LENGTH, RETURN_CODE)
JL653SHELL_API void JL653_RECEIVE_QUEUING_MESSAGE (
  const char *location_file,
  const char *location_function,
  int location_line,
  /*in */ QUEUING_PORT_ID_TYPE QUEUING_PORT_ID,
  /*in */ SYSTEM_TIME_TYPE TIME_OUT,
  /*in */ MESSAGE_ADDR_TYPE MESSAGE_ADDR,
  /*out*/ MESSAGE_SIZE_TYPE *LENGTH,
  /*out*/ RETURN_CODE_TYPE *RETURN_CODE );
#define GET_QUEUING_PORT_ID(QUEUING_PORT_NAME, QUEUING_PORT_ID, RETURN_CODE) JL653_GET_QUEUING_PORT_ID(__FILE__, __FUNCTION__, __LINE__, QUEUING_PORT_NAME, QUEUING_PORT_ID, RETURN_CODE)
JL653SHELL_API void JL653_GET_QUEUING_PORT_ID (
  const char *location_file,
  const char *location_function,
  int location_line,
  /*in */ QUEUING_PORT_NAME_TYPE QUEUING_PORT_NAME,
  /*out*/ QUEUING_PORT_ID_TYPE *QUEUING_PORT_ID,
  /*out*/ RETURN_CODE_TYPE *RETURN_CODE );
#define GET_QUEUING_PORT_STATUS(QUEUING_PORT_ID, QUEUING_PORT_STATUS, RETURN_CODE) JL653_GET_QUEUING_PORT_STATUS(__FILE__, __FUNCTION__, __LINE__, QUEUING_PORT_ID, QUEUING_PORT_STATUS, RETURN_CODE)
JL653SHELL_API void JL653_GET_QUEUING_PORT_STATUS (
  const char *location_file,
  const char *location_function,
  int location_line,
  /*in */ QUEUING_PORT_ID_TYPE QUEUING_PORT_ID,
  /*out*/ QUEUING_PORT_STATUS_TYPE *QUEUING_PORT_STATUS,
  /*out*/ RETURN_CODE_TYPE *RETURN_CODE );

#ifdef __cplusplus
}
#endif

#endif