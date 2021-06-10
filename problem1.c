#define DIV1 3
#define DIV2 5
#define LIMIT 1000

unsigned long long gauss(unsigned long long number)
{
	unsigned long long multiples = (LIMIT - 1) / number;

	return number * (multiples * (multiples + 1) / 2);
}

unsigned long long problem1()
{
	unsigned long long result = gauss(DIV1) + gauss(DIV2) - gauss(DIV1 * DIV2);

	return result;
}