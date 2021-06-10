#define LIMIT 4000000

unsigned long long problem2()
{
	unsigned long long result = 0, before = 1, current = 2, next;

	while (current < LIMIT)
	{
		result += current;

		next = before + 2 * current;

		current = next + before + current;

		before = next;
	}

	return result;
}