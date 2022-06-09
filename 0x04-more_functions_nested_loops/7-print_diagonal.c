#include "main.h"
/**
 * print_diagonal - print diagonally
 * @n: diagonal to create
 * Return: void
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < n; a++)
			{
				_putchar(92);
				_putchar('\n')
			}
		}
	}
}
