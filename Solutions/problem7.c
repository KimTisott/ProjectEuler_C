#define INDEX 10001

#include <stdio.h>
#include <stdlib.h>

unsigned long long problem7()
{
    unsigned long long result = 0, count = 0, limit = nth_prime_upper(INDEX), index = INDEX;

    char* sieve = calloc(limit, sizeof * sieve);

    for (result = 2; result < limit; result++)
    {
        if (!sieve[result])
        {
            count++;

            if (count == index)
            {
                break;
            }

            for (unsigned long long j = result << 1; j < limit; j += result)
            {
                sieve[j] = 1;
            }
        }
    }

    free(sieve);

    return result;
}