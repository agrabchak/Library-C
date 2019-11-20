#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    if (!str || !sub) return -1;
    int sb = mx_strlen(sub);
    int ln = mx_strlen(str) / 2;

    for (int i = 0; i < ln; i ++) {
        if (mx_strstr(str, sub)) {
            count ++;
            str = mx_strstr(str, sub) + sb;
        }
    }
    return count;
}
