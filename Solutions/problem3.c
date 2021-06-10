#define MULT 600851475143

unsigned long long problem3()
{
	unsigned long long result = MULT;

	for (unsigned long long i = 2; i < result; i++)
	{
		while (result % i == 0)
		{
			result /= i;
		}
	}

	return result;
}
