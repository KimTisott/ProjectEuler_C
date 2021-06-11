#define COUNT 100

unsigned long long problem6()
{
    unsigned long long result = 0, count = COUNT, sum = 0, sumSquare = 0;

    for (unsigned long long i = 1; i <= count; i++)
    {
        sum += i;

        sumSquare += i * i;
    }

    result = sum * sum - sumSquare;

    return result;
}