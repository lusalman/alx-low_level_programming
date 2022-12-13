#include"main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int l;
	
	l = n % 10;
	if (n < 0)
	{
		_putchar (-l + '0');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar (l + '0');
		return (1);
	}
	
	return (0);
}
