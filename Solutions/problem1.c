#define N1 3
#define N2 5
#define Limit 1000

unsigned long long problem1()
{
	unsigned long long result = 0, n1sum = 0, n2sum = 0, n12sum = 0, i;

	for (i = 0; i < Limit; i++)
	{
		if (!(i % N1))
		{
			n1sum += i;
		}

		if (!(i % N2))
		{
			n2sum += i;
		}

		if (!(i % (N1 * N2)))
		{
			n12sum += i;
		}
	}

	result = n1sum + n2sum - n12sum;

	return result;
}
