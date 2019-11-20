#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    if (b == NULL) return NULL;
    if (len == 0) return b;
    size_t i = 0;

    unsigned char *arr = (unsigned char *) b;
    unsigned char value = (unsigned char) c;
    while (i < len) {
        arr[i] = value;
        i++;
    }
    return b;
}

/*
int main() {
    //char str[10] = "123456789";
    //printf("str before -> %s\n", str);
    
    char * new = mx_memset(NULL, 'a', 0);
   
    printf("str after -> %s", new);
}
*/
