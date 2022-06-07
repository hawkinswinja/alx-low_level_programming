#include "main.h"
/**
 * print_times_table - times table of given number n
 * @n: given number
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		;
	}
	else
	{
		int a, b, d1,d2,d3, mul;

		for (a = 0;a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				mul = a * b;
				if (mul < 10)
				{
					_putchar(48 + mul);
				}
				else if(mul < 100)
				{
					d2 = mul / 10;
					d1 = mul % 10;
					_putchar(48 + d2);
					_putchar(48 + d1);
				}
				else
				{
					d3 = mul / 100;
					d2 = (mul % 100) / 10;
					d1 = mul % 10;
					_putchar(48 + d3);
					_putchar(48 + d2);
					_putchar(48 + d1);
				}
				if (b == n)
				{
					continue;
				}
				_putchar(44);
				_putchar(46);
				if ((mul + a) > 99)
				{
					continue;
				}
				_putchar(46);
				if ((mul + a) > 10)
				{
					continue;
				}
				_putchar(46);
			}
			_putchar('\n');
		}
	}
}

