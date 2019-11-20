#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    if (!dst) return NULL;
    if (!src || n == 0) return dst;

    size_t i = 0;
    unsigned char *d = (unsigned char*) dst;
    unsigned char *s = (unsigned char*) src;

    while (i < n) {
        d[i] = s[i];
        i++;
    }
    return dst;
}
