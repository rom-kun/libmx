#include "libmx.h"

static int mx_strncmp(const char* s1, const char* s2, int n)
{
  if (n == 0)
    return 0;
  do {
    if (*s1 != *s2++)
      return (*(const unsigned char *)s1 -
        *(const unsigned char *)(s2 - 1));
    if (*s1++ == 0)
      break;
  } while (--n != 0);
  return 0;
}


char *mx_strstr(const char *haystack, const char *needle) {
    if (*haystack == '\0' && *needle != '\0')
        return NULL;

    if ((*haystack == '\0' || *haystack) && *needle == '\0')
        return (char*) haystack;

    while (*haystack) {
        if (mx_strncmp(haystack, needle, mx_strlen(needle)) == 0)
            return (char*) haystack;
        haystack++;
    }
    return NULL;
}
