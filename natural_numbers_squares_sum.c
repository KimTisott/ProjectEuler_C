unsigned long long natural_numbers_squares_sum(unsigned long long number)
{
	return number * (number + 1) * ((number << 1) + 1) / 6;
}