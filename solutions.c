void problem1()
{
	int sum = 0;

	for (int i = 3; i < 1000; i += 3)
	{
		sum += i;
	}

	for (int i = 5; i < 1000; i += 15)
	{
		sum += i;
		sum += i + 5;
	}

	sum -= 1000;
}