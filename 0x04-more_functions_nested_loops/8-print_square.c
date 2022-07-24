#include "main.h"
/**
  * print_square - draw square
  * @size: size by size of square
  * Return: nothing
  */
void print_square(int size)
{
	int a = size, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (a)
	{
		c = 0;
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		a--;
		_putchar('\n');
	}
}
