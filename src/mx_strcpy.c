#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
	char *save = dst;
	for (; (*dst = *src); ++dst, ++src);
	return(save);
}
