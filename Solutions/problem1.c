void problem1()
{
	int result = 0;

	int current = 3;

	for (int i = 3; i < 1000; i += 3)
	{
		result += i;
	}

	for (int i = 5; i < 995; i += 15)
	{
		result += i;

		result += i + 5;
	}

	result += 995;
}
