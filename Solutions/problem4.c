int problem4()
{
    int result = 0;

    int maxMultiplicand = 99;

    for (int multiplier = 1000; multiplier > maxMultiplicand; multiplier--)
    {
        for (int multiplicand = multiplier - 1; multiplicand > 99; multiplicand--)
        {
            int product = (multiplier - 1) * multiplicand;

            int temp = product;

            int reversed = 0;

            while (temp)
            {
                reversed = 10 * reversed + (temp % 10);

                temp /= 10;
            }

            if (reversed == product)
            {
                if (product > result)
                {
                    result = product;

                    maxMultiplicand = multiplicand;

                    break;
                }
            }
        }
    }

    return result;
}