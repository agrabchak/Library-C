#include "libmx.h"

void mx_strdel(char **str) {
	if (str && *str) {
		free(*str);
		*str = NULL;
	}
}

 /*
int main() {
	char *s = malloc(2);
	char **ss = &s;
	mx_strdel(ss);
	printf("%d\n", ss == NULL);
}
*/
