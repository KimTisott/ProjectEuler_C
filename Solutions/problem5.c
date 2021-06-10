long problem5()
{
    long result = 1;

    for (long i = 20; i > 0; i--)
    {
        result = lcm(result, i);
    }

    return result;
}

long gcd(long a, long b)
{
    long r;

    if (a > b)
    {
        long t = a;

        a = b;

        b = t;
    }

    while (r = a % b)
    {
        a = b;

        b = r;
    }

    return b;
}

long lcm(long a, long b)
{
    long long p = (long long)a * b;

    return p / gcd(a, b);
}