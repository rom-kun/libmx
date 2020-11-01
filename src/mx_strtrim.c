#include "libmx.h"

char *mx_strtrim(const char *str) {
	if (str == NULL) return NULL;
	const char *tmp = str;
	int new_strlen = mx_strlen(str);
	const char *tmp2 = str + new_strlen - 1;
	if (new_strlen == 0) return mx_strnew(new_strlen);
	while (mx_isspace(*tmp)) {
		new_strlen--;
		tmp++;
	}
	while (mx_isspace(*tmp2)) {
		new_strlen--;
		tmp2--;
	}
	if (new_strlen < 0) new_strlen = 0;
	char *trimmedStr = mx_strnew(new_strlen);
	if (trimmedStr == 0) return 0;
	trimmedStr = mx_strncpy(trimmedStr, tmp, new_strlen);
	return trimmedStr;
}
