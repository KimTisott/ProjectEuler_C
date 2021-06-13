#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define Function problem9
#define Answer 31875000
#define Repetitions 1000
#define Progress 0

int main()
{
	benchmark(Function, Answer, Repetitions, Progress);
}