#define LIMIT 2000000

#include <stdio.h>
#include <stdlib.h>

unsigned long long problem10()
{
    unsigned long long result = 0, limit = LIMIT;

    char* sieve = calloc(limit, sizeof(char));

    for (unsigned long long i = 2; i < limit; i++)
    {
        if (!sieve[i])
        {
            result += i;

            for (unsigned long long j = i * i; j < limit; j += i)
            {
                sieve[j] = 1;
            }
        }
    }

    free(sieve);

    return result;
}