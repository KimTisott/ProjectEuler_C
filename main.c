#include <stdio.h>
#include "benchmark.h"
#include "solutions.h"

#define BenchmarkOnly 1
#define BenchmarkRuns 1000000
#define BenchmarkFunction problem1
#define BenchmarkProgress 0

int main()
{
	int option = 0;
	void* function;

	if (BenchmarkOnly)
	{
		benchmark(BenchmarkFunction, BenchmarkRuns, BenchmarkProgress);
	}
	else
	{
		while (1)
		{
			system("cls||clear");

			printf("        PROJECT EULER         \n");
			printf("------------------------------\n");
			printf("1. Multiples of 3 and 5       \n");
			printf("2. Even Fibonacci numbers     \n");
			printf("3. Largest prime factor       \n");
			printf("4. Largest palindrome product \n");
			printf("5. Smallest multiple          \n");
			printf("6. Sum square difference      \n");
			printf("7. 10001st prime              \n");
			printf("\nProblem to run: ");
			scanf_s("%d", &option);

			switch (option)
			{
			case 1:
				function = problem1;
				break;
			case 2:
				function = problem2;
				break;
			case 3:
				function = problem3;
				break;
			case 4:
				function = problem4;
				break;
			case 5:
				function = problem5;
				break;
			case 6:
				function = problem6;
				break;
			case 7:
				function = problem7;
				break;
			default:
				return;
				break;
			}

			benchmark(function, BenchmarkRuns, BenchmarkProgress);

			getch();
		}
	}
}