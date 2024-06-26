#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include "stdint.h"
#include "stddef.h"
#include <stdarg.h>

    // 以下方法只适用于32位的变参处理方式，因为32位的变参是通过栈传递的，所以要通过指针来获取参数，而对于64位的变参是通过寄存器传递的，所以要通过寄存器来获取参数
    // typedef uint8_t *va_list;
    // #define va_start(varg_ptr, last_val) (varg_ptr = (uint8_t *)(&last_val + 1)) // 这里是因为format是一个指针，所以要+1
    // #define va_arg(varg_ptr, type) (varg_ptr += sizeof(type), *((type *)varg_ptr - 1)) // 参数是整个压入栈中的，所以要+sizeof(type)
    // #define va_end(varg_ptr) (varg_ptr = NULL)

#ifdef __cplusplus
}
#endif
