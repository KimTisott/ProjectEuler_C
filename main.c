#include "Benchmark/benchmark.h"
#include "Solutions/index.h"

#define Function problem10
#define Answer 142913828922
#define Repetitions 1000
#define Progress 0

int main()
{
	benchmark(Function, Answer, Repetitions, Progress);
}