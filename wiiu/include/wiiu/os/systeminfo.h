#pragma once
#include <wiiu/types.h>
#include "time.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
   uint32_t clockSpeed;
   uint32_t __unknown0;
   OSTime baseTime;
   uint32_t __unknown[4];
}OSSystemInfo;

OSSystemInfo *OSGetSystemInfo();

#ifdef __cplusplus
}
#endif
