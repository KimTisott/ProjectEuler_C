int is_palindrome(unsigned long long number)
{
    unsigned long long reversed = 0, temp = number;

    while (temp)
    {
        reversed = 10 * reversed + (temp % 10);

        temp /= 10;
    }

    return reversed == number;
}