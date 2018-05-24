#ifndef _Defs_h
#define _Defs_h


/**includes & defines**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ARG 10					// for main input line
#define MAX_INPUT_LINE 100			// for main input line
#define APC_MAX_Soldiers 6			// for APC
#define MAX_ID_LENGTH 8			    // for Structs IDs


#define MALLOC_ERR_MSG "Error: Cant perform Malloc\n"
#define ARG_ERR_MSG "Error: Function's Args Error\n"



typedef enum Result_ { FAILURE, SUCCESS } Result;


#endif
