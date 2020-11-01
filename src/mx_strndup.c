#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	size_t str_len = mx_strlen(s1);
	if (str_len < n) {
		n = str_len;
	}
	char *copy = mx_strnew(n);

	if (copy  == NULL)
		return NULL;
	else
		mx_strncpy(copy, s1, n);
	return copy;
}
