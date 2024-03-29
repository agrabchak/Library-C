#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {

   if (!ptr && size) return malloc(size);

   if (size == 0 && ptr) {
       free(ptr);
       return NULL;
   }
   size_t len = mx_strlen(ptr);
   void *res;
   if (len > size) {
       res = malloc(len);

       if (!res) return NULL;

       res = mx_memmove(res, ptr, len);

   } else {
       res = malloc(size);
       if (!res) return NULL;
       res = mx_memmove(res, ptr, size);
   }
   return res;
}
