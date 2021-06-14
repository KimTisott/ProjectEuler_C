#define INDEX 10001

#include <stdio.h>
#include <stdlib.h>

unsigned long long problem7()
{
    unsigned long long result, count = 0, limit = nth_prime_upper(INDEX), index = INDEX;

    char* sieve = malloc(limit * sizeof * sieve);

    memset(sieve, 1, 1);

    for (result = 2; result < limit; result++)
    {
        if (sieve[result])
        {
            count++;

            if (count == index)
            {
                break;
            }

            for (unsigned long long i = result * result; i < limit; i += result)
            {
                sieve[i] = 0;
            }
        }
    }

    free(sieve);

    return result;
}