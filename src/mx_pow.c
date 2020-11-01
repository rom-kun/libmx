#include "libmx.h"

double mx_pow(double n, unsigned int pow)
{
	if (pow < 0) return 0;
    double result = 1;
    for (unsigned int i = pow; i > 0; i--)
    {
        result = result * n;
    }
    return result;
}
