unsigned long long arithmetic_series(unsigned long long number, unsigned long long limit)
{
	unsigned long long multiples = (limit - 1) / number;

	return number * (multiples * (multiples + 1) >> 1);
}