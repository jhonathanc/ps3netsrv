#include "mem.h"

void _memset(void *m, size_t n)
{
	uint8_t p = n & 7;

	n >>= 3;
	uint64_t *s = (uint64_t *) m;
	while (n--) *s++ = 0LL;

	if(p)
	{
		char *c = (char *) s;
		while (p--) *c++ = '\0';
	}
}

void _memcpy(void *dst, void *src, size_t n)
{
	uint8_t p = n & 7;

	n >>= 3;
	uint64_t *d = (uint64_t *) dst;
	uint64_t *s = (uint64_t *) src;
	while (n--) *d++ = *s++;

	if(p)
	{
		char *m = (char *) d;
		char *c = (char *) s;
		while (p--) *m++ = *c++;
	}
}
