#define INDEX 10001

#include <stdio.h>
#include <stdlib.h>

unsigned long long problem7()
{
    unsigned long long result, count = 0, limit = nth_prime_upper(INDEX), index = INDEX;

    char* sieve = calloc(limit, sizeof(char));

    for (result = 2; result < limit; result++)
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