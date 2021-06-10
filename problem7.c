int problem7()
{
    int result = 0;

    int primes[10001] = { 2, 3 };

    for (int n = 2; n < 10001; n++)
    {
        for (int x = primes[n - 1] + 2; ; x += 2)
        {
            int prime = 1;

            for (int i = 0; i < n; i++)
            {
                int p = primes[i];

                if (p * p > x)
                {
                    break;
                }

                if (x % p == 0)
                {
                    prime = 0;

                    break;
                }
            }

            if (prime)
            {
                primes[n] = x;

                break;
            }
        }
    }

    result = primes[10000];

    return result;
}