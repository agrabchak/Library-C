#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	size_t len = 0;
	char *dupl;
	size_t i = 0;

	if(!*s1 || n <= 0)
		return NULL;
	len = mx_strlen(s1);

	if(len >= n)
		dupl = mx_strnew(n);
	else
		dupl = mx_strnew(len);

	while(i < n && s1[i] != '\0') {
		dupl[i] = s1[i];
		i++;
	}
	dupl[i] = '\0';
	return dupl;
}

/*
int main() {
	char s1[] = "asdfg";
	size_t n = 0;
	printf("%s\n", mx_strndup(s1, n));
	return 0;
}
*/
