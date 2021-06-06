void problem2()
{
	int sum = 0, a = 1, b = 2, temp;

	while (b < 4000000)
	{
		sum += b;
    
		temp = a + 2 * b;
    
		b = temp + a + b;
    
		a = temp;
	}
}
