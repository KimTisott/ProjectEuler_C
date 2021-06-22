#define DIVISORS 500

#include "../helpers.h"

unsigned long long problem12()
{
    unsigned long long result = 0, increment = 1, divisors = DIVISORS, count = 0;

    while (count <= divisors)
    {
        result = natural_numbers_sum(increment);

        count = divisor_count(result);

        increment++;
    }

    return result;
}