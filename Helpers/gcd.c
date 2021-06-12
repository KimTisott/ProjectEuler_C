unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    unsigned long long temp;

    while (b != 0)
    {
        temp = a % b;

        a = b;

        b = temp;
    }

    return a;
}