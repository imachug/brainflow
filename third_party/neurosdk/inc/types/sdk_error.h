#ifndef SDK_ERROR_H
#define SDK_ERROR_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lib_export.h"
#include <stddef.h>

    typedef int ret_code;

#define SDK_NO_ERROR 0
#define ERROR_UNHANDLED_EXCEPTION 1
#define ERROR_EXCEPTION_WITH_MESSAGE 2

#ifdef __cplusplus
}
#endif

#endif // SDK_ERROR_H
