long long problem3()
{
	long long result = 600851475143;

	for (long long i = 2; i < result; i++)
	{
		while (result % i == 0)
		{
			result /= i;
		}
	}

	return result;
}