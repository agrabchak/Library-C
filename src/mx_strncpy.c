#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
	int i = 0;

	while (src[i] && len != '\0') {
		dst[i] = src[i];
		i++;
	}
	while (i < len) {
		dst[i] = '\0';
		i++;
	}
	return dst;
}

/*
int main() {
	char dst = "asd";
	char src = "asdfg";
	int len = 3;
	printf("%s/n", mx_strncpy(&dst, src, 3));
}
*/
