#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
	if (!str)
		return -2;
	char res = c;
	 
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == res)
		return i;
	}
	return -1;
}
