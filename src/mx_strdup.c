#include "libmx.h"

char *mx_strdup(const char *str) {
	int size = mx_strlen(str);
	char *new_str = mx_strnew(size);
	if (new_str == NULL) return NULL;
	new_str = mx_strcpy(new_str, str);
	return new_str;
}
