#include "main.h"
/**
  * print_diagonal - print diagonal line
  * @n: length of diagonal
  * Return: nothing
  */
void print_diagonal(int n)
{
	int b = 0, a;

	if (n <= 0)
		_putchar('\n');
	while (b < n)
	{
		a = 0;
		while (a < b)
		{
			_putchar(32);
			a++;

		}
		_putchar(92);
		_putchar('\n');
		b++;
	}
}
