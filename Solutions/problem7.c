#define INDEX 10001
#define LIMIT 1000000

#include <stdio.h>
#include <stdlib.h>

unsigned long long problem7()
{
    unsigned long long result = 0, count = 0, limit = LIMIT, target = INDEX;

    char* sieve = calloc(limit, sizeof * sieve);

    for (result = 2; result < limit; result++)
    {
        if (!sieve[result])
        {
            unsigned long long j;

            count++;

            if (count == target)
            {
                break;
            }

            for (j = result << 1; j < limit; j += result)
            {
                sieve[j] = 1;
            }
        }
    }

    free(sieve);

    return result;
}