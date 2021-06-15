#define DIV1 3
#define DIV2 5
#define LIMIT 1000

unsigned long long problem1()
{
	unsigned long long result = arithmetic_series(DIV1, LIMIT) + arithmetic_series(DIV2, LIMIT) - arithmetic_series(DIV1 * DIV2, LIMIT);

	return result;
}