#define MULT 600851475143

unsigned long long problem3()
{
	unsigned long long result = MULT, counter = 2;

	while (counter * counter <= result)
	{
		if (result % counter == 0)
		{
			result /= counter;
		}
		else
		{
			if (counter == 2)
			{
				counter++;
			}
			else
			{
				counter += 2;
			}
		}
	}

	return result;
}