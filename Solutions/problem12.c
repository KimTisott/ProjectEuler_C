#define DIVISORS 500

#include <math.h>

unsigned long long divisors_count(unsigned long long n)
{
    unsigned long long result = 0;

    for (unsigned long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            result++;

            if (n / i != i)
            {
                result++;
            }
        }
    }

    return result;
}

unsigned long long problem12()
{
    unsigned long long result = 0, divisors = DIVISORS, count = 0;

    while (count <= divisors)
    {
        count = divisors_count(result);

        result++;
    }

    return result;
}