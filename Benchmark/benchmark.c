#include <math.h>
#include <windows.h>

double time()
{
	LARGE_INTEGER t, f;

	QueryPerformanceCounter(&t);

	QueryPerformanceFrequency(&f);

	return (double)t.QuadPart / (double)f.QuadPart;
}

void benchmark(void* function(), int count, int progress)
{
	double *times = malloc(sizeof(double) * count);
	double total = 0.0, mean, sd = 0.0;

	printf("Benchmark Started\n");
	printf("------------------------------\n");

	for (int i = 0; i < count; i++)
	{
		double current = time();

		function();

		current = time() - current;

		times[i] = current;

		total += current;

		if (progress)
		{
			printf("[%04d] %.1fus\n", i + 1, times[i] * 1000000);
		}
	}

	mean = total / count;

	for (int i = 0; i < count; i++)
	{
		sd += pow(times[i] - mean, 2);
	}

	printf("Total: %.3fus\n", total * 1000000);

	printf("Mean: %.3fus\n", mean * 1000000);

	printf("SD: %.3fus\n", sqrt(sd / count) * 1000000);
}
