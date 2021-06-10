#define DIGITS 3

#include <math.h>

int is_palindromic(unsigned long long n)
{
    unsigned long long reversed = 0, temp = n;

    while (temp)
    {
        reversed = 10 * reversed + (temp % 10);
        
        temp /= 10;
    }

    return reversed == n;
}

unsigned long long problem4()
{
    unsigned long long result = 0, limit = 1;

    for (int i = 0; i < DIGITS; i++)
    {
        limit *= 10;
    }

    for (unsigned long long i = limit - 1; i > 0; i--)
    {
        if (i * i < result)
        {
            break;
        }

        for (unsigned long long j = i; j > fmax(floor(result / i), pow(10, log10(i) - 1)); j--)
        {
            unsigned long long temp = i * j;

            if (is_palindromic(temp))
            {
                result = temp;

                break;
            }
        }
    }

    return result;
}
