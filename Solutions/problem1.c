#define DIV1 3
#define DIV2 5
#define LIMIT 1000

#include "../helpers.h"

unsigned long long problem1()
{
	unsigned long long result = 0, divisor1 = DIV1, divisor2 = DIV2, limit = LIMIT - 1, product = divisor1 * divisor2;
	
	result = divisor1 * natural_numbers_sum(limit / divisor1) + divisor2 * natural_numbers_sum(limit / divisor2) - product * natural_numbers_sum(limit / product);

	return result;
}