#define INDEX 10001
#define LIMIT 1000000

#include <stdlib.h>

unsigned long long problem7()
{
    unsigned long long result, count = 0, limit = LIMIT, target = INDEX;

    char* sieve = calloc(limit, sizeof * sieve);

    for (result = 2; result < limit; result++)
    {
        if (!sieve[result])
        {
            unsigned long long j;

            count++;

            if (count == target)
            {
                return result;
            }

            for (j = result * 2; j < limit; j += result)
            {
                sieve[j] = 1;
            }
        }
    }
}