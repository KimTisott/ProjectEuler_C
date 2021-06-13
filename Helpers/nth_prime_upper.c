#include <math.h>

unsigned long long nth_prime_upper(unsigned long long n)
{
    double fn = (double)n, flogn = log(n), flog2n = log(flogn), upper;

    if (n >= 688383)
    {
        upper = fn * (flogn + flog2n - 1.0 + ((flog2n - 2.00) / flogn));
    }
    else if (n >= 178974)
    {
        upper = fn * (flogn + flog2n - 1.0 + ((flog2n - 1.95) / flogn));
    }
    else if (n >= 39017)
    {
        upper = fn * (flogn + flog2n - 0.9484);
    }
    else
    {
        upper = fn * (flogn + 0.6000 * flog2n);
    }

    return (unsigned long long)ceil(upper);
}