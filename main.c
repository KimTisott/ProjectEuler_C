#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define Function problem11
#define Answer 70600674
#define Repetitions 1000
#define Progress 0

int main()
{
	benchmark(Function, Answer, Repetitions, Progress);
}