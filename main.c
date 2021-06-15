#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define Function problem12
#define Answer 76576500
#define Repetitions 1000
#define Progress 0

int main()
{
	benchmark(Function, Answer, Repetitions, Progress);
}