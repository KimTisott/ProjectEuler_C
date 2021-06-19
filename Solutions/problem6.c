#define COUNT 100

#include "../helpers.h"

unsigned long long problem6()
{
    unsigned long long result = 0, count = COUNT, sum, squaresSum;

    sum = natural_numbers_sum(count);

    squaresSum = natural_numbers_squares_sum(count);

    result = sum * sum - squaresSum;

    return result;
}