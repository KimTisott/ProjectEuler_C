void problem4()
{
    int result = 0;

    int maxMultiplicand = 99;

    for (int multiplier = 999; multiplier > maxMultiplicand; multiplier--)
    {
        for (int multiplicand = 999; multiplicand > 99; multiplicand--)
        {
            int product = multiplier * multiplicand;

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
}
