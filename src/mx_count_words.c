#include "libmx.h"

int mx_count_words(const char *str, char c) {
	int count = 0;
	int size = 0;
	if (str == NULL)
		return -1;
	size = mx_strlen(str);
	if (size == 0) return 0;
	for (int i = 0; i < size; i++) {
		if (str[i] == c && (str[i+1] != '\0' && str[i+1] != c))
			count++;
	}
	if (str[0] != c && str[1] != '\0')
		count++;
	return count;
}
