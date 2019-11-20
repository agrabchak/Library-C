#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    char *start = (char *) haystack;
    if (*needle == '\0') return (start);

    while (*haystack != '\0') {
        start = (char*) haystack;
        while (*needle == *haystack && *haystack != '\0') {
            ++haystack;
            ++needle;
        }
        if (*needle == '\0') return (start);
        haystack = start + 1;
    }
    return NULL;
}
