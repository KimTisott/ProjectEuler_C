#define Limit 4000000

unsigned long long problem2()
{
	unsigned long long result = 0, before = 1, current = 2, temp;

	while (current < Limit)
	{
		result += current;

		temp = before + 2 * current;

		current = temp + before + current;

		before = temp;
	}

	return result;
}
