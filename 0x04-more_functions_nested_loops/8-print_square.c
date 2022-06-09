#include "main.h"
/**
 * print_square - print swuare of given number
 * @size: length
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, a;

		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

