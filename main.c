#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define Function problem4
#define Runs 1000000
#define Progress 0

int main()
{
	benchmark(Function, Runs, Progress);
}