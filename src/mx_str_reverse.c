#include "libmx.h"

void mx_str_reverse(char *s) {
	if (!s) return;
	int i;
	int j;
	char a;
	int len = mx_strlen(s);
	if (len <= 0) return;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}
