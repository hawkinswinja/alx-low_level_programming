#include "main.h"
/**
  * print_binary - print binary equivalent of passed value
  * @n: value in deci
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned int result = 1, count = 0;
	int i;

	while (n > result)
	{
		result *= 2;
		count++;
		if (result * 2 > n)
			break;
	}
	for (i = count; i >= 0; i--)
	{
		result = n >> count;
		if (result & 1)
		{
			_putchar(1 + 48);
		}
		else
		{
			_putchar(48);
		}
		count--;
	}
}
