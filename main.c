#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define BenchmarkRuns 1000000
#define BenchmarkFunction problem1
#define BenchmarkProgress 0

int main()
{
	benchmark(BenchmarkFunction, BenchmarkRuns, BenchmarkProgress);
}
