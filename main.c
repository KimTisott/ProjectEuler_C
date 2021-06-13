#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define Function problem4
#define Answer 906609
#define Repetitions 1000
#define Progress 0

int main()
{
	benchmark(Function, Answer, Repetitions, Progress);
}