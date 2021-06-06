void problem1()
{
	int sum = 0, current = 3;

	for (int i = 3; i < 1000; i += 3)
	{
		sum += i;
	}

	for (int i = 5; i < 995; i += 15)
	{
		sum += i;
		sum += i + 5;
	}

	sum += 995;
}
