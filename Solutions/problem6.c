int problem6()
{
    int result = 0;

    int sum = 0;

    int sumSquare = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;

        sumSquare += i * i;
    }

    result = sum * sum - sumSquare;

    return result;
}