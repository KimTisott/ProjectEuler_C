#include "benchmark.h"
#include "solutions.h"

#define Function problem12
#define Answer 76576500
#define Repetitions 1000
#define Progress 1

int main()
{
	benchmark(Function, Answer, Repetitions, Progress);
}