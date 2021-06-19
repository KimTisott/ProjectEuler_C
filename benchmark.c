#include <math.h>
#include <stdio.h>
#include <windows.h>

double time()
{
	LARGE_INTEGER t, f;

	QueryPerformanceCounter(&t);

	QueryPerformanceFrequency(&f);

	return (double)t.QuadPart / (double)f.QuadPart;
}

void benchmark(void* function(), unsigned long long answer, unsigned long long count, int progress)
{
	double *times = malloc(sizeof(double) * count), total = 0, mean, sd = 0;
	
	for (int i = 0; i < count; i++)
	{
		double current = time();

		unsigned long long result = function();

		current = time() - current;

		if (answer != 0 && result != answer)
		{
			printf("Result (%llu) different than Answer (%llu)\n", result, answer);

			break;
		}

		times[i] = current;

		total += current;

		if (progress)
		{
			printf("[%04d] %.3fus\n", i + 1, times[i] * 1000000);
		}
	}

	if (total)
	{
		mean = total / count;

		for (int i = 0; i < count; i++)
		{
			sd += pow(times[i] - mean, 2);
		}

		printf("Mean: %.3fus\n", mean * 1000000);

		printf("SD: %.3fus\n", sqrt(sd / count) * 1000000);
	}

	printf("------------------------------\n");
}