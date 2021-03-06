unsigned long long divisor_count(unsigned long long n)
{
    unsigned long long result = 1;

    while (n % 2 == 0)
    {
        result++;

        n = n >> 1;
    }

    for (unsigned long long i = 3; i <= n; i += 2)
    {
        unsigned long long count = 0;

        while (n % i == 0)
        {
            count++;

            n /= i;
        }

        result *= count + 1;
    }

    return result;
}