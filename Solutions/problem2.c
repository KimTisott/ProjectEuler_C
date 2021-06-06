void problem2()
{
	int result = 0;

	int a = 1;

	int b = 2;

	int temp;

	while (b < 4000000)
	{
		result += b;

		temp = a + 2 * b;

		b = temp + a + b;

		a = temp;
	}
}
