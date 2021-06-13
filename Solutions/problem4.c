#define DIGITS 3

#include <math.h>

unsigned long long problem4()
{
    unsigned long long result = 0, digits = DIGITS, base, limit = 1;

    for (int i = 0; i < digits; i++)
    {
        limit *= 10;
    }

    base = limit / 10;

    limit--;

    for (unsigned long long i = limit; i > base; i--)
    {
        if (i * i < result)
        {
            break;
        }

        for (unsigned long long j = i; j > base; j--)
        {
            unsigned long long product = i * j;

            if (product > result && is_palindrome(product))
            {
                result = product;

                break;
            }
            else if (product < result)
            {
                break;
            }
        }
    }

    return result;
}