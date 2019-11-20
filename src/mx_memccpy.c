#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    size_t i = 0;
    unsigned char *d = (unsigned char*) dst;
    unsigned char *s = (unsigned char*) src;

    for (; i < n && s[i] != c; i++)
        d[i] = s[i];

        if (s[i] == c) {
            d[i] = s[i];
            return &d[i + 1];
        }
        return NULL;
}

/*int main() {
    char d[] = "1234";
    char s[] = "1234";
    mx_memccpy(d, s, 3, 4);
    printf("%s\n", mx_memccpy(d, s, 3, 4));
}
*/
