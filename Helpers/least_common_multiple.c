unsigned long long least_common_multiple(unsigned long long a, unsigned long long b)
{
    return (unsigned long long)a * b / greatest_common_divisor(a, b);
}