#include "../helpers.h"

unsigned long long least_common_multiple(unsigned long long a, unsigned long long b)
{
    return a / greatest_common_divisor(a, b) * b;
}