#define DIV1 3
#define DIV2 5
#define LIMIT 1000

unsigned long long problem1()
{
	unsigned long long result = faps(DIV1, LIMIT) + faps(DIV2, LIMIT) - faps(DIV1 * DIV2, LIMIT);

	return result;
}