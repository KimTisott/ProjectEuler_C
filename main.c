#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define Function problem7
#define Repetitions 1000
#define Progress 0

int main()
{
	benchmark(Function, Repetitions, Progress);
}