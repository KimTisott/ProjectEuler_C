#include "benchmark.h"
#include "solutions.h"

#define Function problem7
#define Answer 104743
#define Repetitions 1000
#define Progress 0

int main()
{
	benchmark(Function, Answer, Repetitions, Progress);
}