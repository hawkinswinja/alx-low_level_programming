#include "main.h"
/**
 * print_sign - prints the sign bit of numbers
 * @n: number to check sign value
 * Returns: 1 for +, 0 for 0 and -1 for -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
