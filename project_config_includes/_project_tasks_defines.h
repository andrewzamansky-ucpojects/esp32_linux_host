/*
 * file : _project_tasks_defines.h
 *
 *
 */

#ifndef _project_tasks_defines_H
#define _project_tasks_defines_H

#include "project_config.h"


/******   task priorities *********/
#define ESP8266_TASK_PRIORITY             1// not used yet
#define ASYNC_TX_WRAPPER_TASK_PRIORITY    1// not used yet
/*********************************/


#define ADDITIONAL_STACK_SAFETY_MARGIN    20
#define DEFINE_STACK_SIZE(n)    (n + ADDITIONAL_STACK_SAFETY_MARGIN)
/******   task stack sizes *********/
#define ESP8266_TASK_STACK_SIZE          DEFINE_STACK_SIZE( 260 )// not used yet
#define ASYNC_TX_WRAPPER_TASK_STACK_SIZE DEFINE_STACK_SIZE( 260 )// not used yet
/***********************************/


/***********************************/

#endif /* */
