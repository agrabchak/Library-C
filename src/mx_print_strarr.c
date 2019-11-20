#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	if(!arr || !delim) {
    	for(int i = 0; arr[i] != NULL; i++) {
    		mx_printstr(arr[i]);
    	    if(arr[i + 1] != NULL)
    	    mx_printstr(delim);
        }
        write(1, "\n", 1);
    }
}

/*
int main () {
	char *s[5] = {"Hello", "my", "dear", "friends"};
	mx_print_strarr(s, " ");
    return 0;
}
*/
