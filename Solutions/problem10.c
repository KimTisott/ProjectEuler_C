#define LIMIT 2000000

#include <stdio.h>
#include <stdlib.h>

unsigned long long problem10()
{
    unsigned long long result = 0, limit = LIMIT;

    char* sieve = malloc(limit * sizeof * sieve);

    memset(sieve, 1, 1);

    for (unsigned long long i = 2; i < limit; i++)
    {
        if (sieve[i])
        {
            result += i;

            for (unsigned long long j = i; i * j < limit; j++)
            {
                sieve[i * j] = 0;
            }
        }
    }

    free(sieve);

    return result;
}