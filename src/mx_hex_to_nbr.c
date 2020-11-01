#include "libmx.h"

static bool mx_isdigit(int c){
    return ((c>='0') && (c<='9')) ? true : false;
}
static bool mx_islower(int c) {
    return (c >= 97 && c <=122);
}
static bool mx_isupper(int c) {
    return (c >= 65 && c <= 90);
}

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long base = 1;
    unsigned long res = 0;
    if (!hex)
        return 0;
    for (int i = mx_strlen(hex) - 1; i >= 0; i--) {
        if (mx_isdigit(hex[i])) {
            res+= (hex[i] - 48) * base;
            base *= 16;
        }
        else if (mx_isupper(hex[i])) {
            res += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (mx_islower(hex[i])) {
            res += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    return res;
}
