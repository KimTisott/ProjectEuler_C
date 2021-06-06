void problem3()
{
	unsigned long long result = 600851475143;

	for (unsigned long long i = 2; i < result; i++)
	{
		while (result % i == 0)
		{
			result /= i;
		}
	}
}
