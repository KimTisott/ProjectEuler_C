#include <float.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

double time()
{
	LARGE_INTEGER t, f;

	QueryPerformanceCounter(&t);

	QueryPerformanceFrequency(&f);

	return (double)t.QuadPart * 1000000 / (double)f.QuadPart;
}

void benchmark(void* function(), char *id, unsigned long long count, int progress)
{
	double* times = malloc(sizeof(double) * count), total = 0, mean, sd = 0, best = DBL_MAX, worst = 0;
	
	printf("#%s\n", id);

	for (int i = 0; i < count; i++)
	{
		double current = time();

		function();

		current = time() - current;

		times[i] = current;

		total += current;

		if (current > worst)
		{
			worst = current;
		}
		
		if (current < best)
		{
			best = current;
		}

		if (progress)
		{
			printf("[%04d] %.3fus\n", i + 1, times[i]);
		}
	}

	if (total)
	{
		mean = total / count;

		for (int i = 0; i < count; i++)
		{
			sd += pow(times[i] - mean, 2);
		}

		printf("Mean: %.3fus\n", mean);

		printf("SD: %.3fus\n", sqrt(sd / count));

		printf("Best: %.3fus\n", best);

		printf("Worst: %.3fus\n", worst);
	}

	printf("------------------------------\n");
}