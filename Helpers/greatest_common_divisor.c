unsigned long long greatest_common_divisor(unsigned long long a, unsigned long long b)
{
    while (b != 0)
    {
        unsigned long long temp = a % b;

        a = b;

        b = temp;
    }

    return a;
}