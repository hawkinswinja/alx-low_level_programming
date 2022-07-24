#include "main.h"
/**
  * print_triangle - draw a triangle
  * @size: length of triangle
  * Return: nothing
  */
void print_triangle(int size)
{
	int a, b = 1, c;

	if (size <= 0)
		_putchar('\n');
	while (b <= size)
	{
		a = 1;
		c = size - b;
		while (c)
		{
			_putchar(' ');
			c--;
		}
		while (a <= b)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
