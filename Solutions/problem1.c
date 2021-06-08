#define DIV1 3
#define DIV2 5
#define LIMIT 1000

unsigned long long problem1()
{
	unsigned long long result = 0, smaller, larger, i;

	if (DIV1 < DIV2)
	{
		smaller = DIV1;
		larger = DIV2;
	}
	else
	{
		smaller = DIV2;
		larger = DIV1;
	}

	if (larger % smaller)
	{
		for (i = smaller; i < LIMIT; i += smaller)
		{
			result += i;
		}
		for (i = larger; i < LIMIT; i += larger)
		{
			result += i;
		}

		unsigned long long product = smaller * larger;
		for (i = product; i < LIMIT; i += product)
		{
			result -= i;
		}
	}
	else
	{
		for (i = smaller; i < LIMIT; i += smaller)
		{
			result += i;
		}
	}

	return result;
}
