#define DIGITS 3

unsigned long long problem4()
{
    unsigned long long result = 0, digits = DIGITS, max = 1, base, limit, decrement;

    for (int i = 0; i < digits; i++)
    {
        max *= 10;
    }

    base = max / 10;

    max--;

    if (digits % 2)
    {
        limit = max - 9;
        decrement = 11;
    }
    else
    {
        limit = max;
        decrement = 1;
    }

    for (unsigned long long i = max; i > base; i--)
    {
        for (unsigned long long j = limit; j > base; j -= decrement)
        {
            unsigned long long product = i * j;

            if (product > result && is_palindrome(product))
            {
                result = product;

                break;
            }
            else if (product < result)
            {
                break;
            }
        }
    }

    return result;
}