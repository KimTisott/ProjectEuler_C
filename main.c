#include "benchmark.h"
#include "solutions.h"

#define Repetitions 100
#define Progress 0

int main()
{
	benchmark(problem1, "1", Repetitions, Progress);

	benchmark(problem2, "2", Repetitions, Progress);

	benchmark(problem3, "3", Repetitions, Progress);

	benchmark(problem4, "4", Repetitions, Progress);

	benchmark(problem5, "5", Repetitions, Progress);

	benchmark(problem6, "6", Repetitions, Progress);

	benchmark(problem7, "7", Repetitions, Progress);

	benchmark(problem8, "8", Repetitions, Progress);

	benchmark(problem9, "9", Repetitions, Progress);

	benchmark(problem10, "10", Repetitions, Progress);

	benchmark(problem11, "11", Repetitions, Progress);

	benchmark(problem12, "12", Repetitions, Progress);

	benchmark(problem13, "13", Repetitions, Progress);
}