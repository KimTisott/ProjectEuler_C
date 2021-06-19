#define INDEX 10001

#include <stdio.h>
#include <stdlib.h>
#include "../helpers.h"

unsigned long long problem7()
{
    unsigned long long result, index = INDEX, limit = nth_prime_upper(index), count = 1;

    char* sieve = calloc(limit, sizeof(char));

    for (result = 3; result < limit; result += 2)
    {
        if (!sieve[result])
        {
            count++;

            if (count == index)
            {
                break;
            }

            for (unsigned long long i = result * result; i < limit; i += result)
            {
                sieve[i] = 1;
            }
        }
    }

    free(sieve);

    return result;
}