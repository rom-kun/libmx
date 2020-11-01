#include "libmx.h"

void mx_strdel(char **str) {
	free(*str);
	*str = 0;
}
