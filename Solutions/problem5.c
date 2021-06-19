#define COUNT 20

#include "../helpers.h"

unsigned long long problem5()
{
    unsigned long long result = 1, count = COUNT;

    for (unsigned long long i = count; i > 0; i--)
    {
        result = least_common_multiple(result, i);
    }

    return result;
}