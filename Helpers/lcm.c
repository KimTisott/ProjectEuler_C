unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    unsigned long long p = (unsigned long long)a * b;

    return p / gcd(a, b);
}