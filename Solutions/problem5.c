#define COUNT 20

unsigned long long problem5()
{
    unsigned long long result = 1;

    for (int i = COUNT; i > 0; i--)
    {
        result = lcm(result, i);
    }

    return result;
}