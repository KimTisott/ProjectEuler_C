#define COUNT 20

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (a > b)
    {
        unsigned long long t = a;

        a = b;

        b = t;
    }

    unsigned long long r;

    while (r = a % b)
    {
        a = b;

        b = r;
    }

    return b;
}

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    unsigned long long p = (unsigned long long)a * b;

    return p / gcd(a, b);
}

unsigned long long problem5()
{
    unsigned long long result = 1, count = COUNT;

    for (int i = count; i > 0; i--)
    {
        result = lcm(result, i);
    }

    return result;
}