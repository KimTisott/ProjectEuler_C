#define MULT 600851475143

unsigned long long problem3()
{
	unsigned long long result = MULT, counter = 3;

	while (counter * counter <= result)
	{
		if (result % counter == 0)
		{
			result /= counter;
		}
		else
		{
			counter += 2;
		}
	}

	return result;
}