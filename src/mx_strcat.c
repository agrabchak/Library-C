#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
	int i = mx_strlen(s1);
	int j = 0;
	if (s2)
		while ((s1[i] = s2[j]) != '\0') {
			i++;
			j++;
		}
	return s1;
}

/*
int main() {
	char s1[] = "qwerto";
	char s2[] = "asd";
	printf("%s\n", mx_strcat(s1,s2));
}
*/
