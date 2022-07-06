#ifndef __MEM_H__
#define __MEM_H__

#include <stdlib.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void _memset(void *m, size_t n);
void _memcpy(void *dst, void *src, size_t n);

#ifdef __cplusplus
}
#endif

#endif /* __MEM_H__ */
