#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print triangle using #
 * @size: base of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int h, c, b;

		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= (size - h); b++)
			{
				_putchar(32);
			}
			for (c = 1; c <= h; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
