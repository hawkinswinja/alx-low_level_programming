#include "main.h"
/**
 * times_table - multiplication table of 9
 * Return: void
 */
void times_table(void)
{
	int a, n, i, mul;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			mul = n * i;
			if (mul < 10)
			{
				_putchar(mul + 48);
				if (i == 9)
				{
					continue;
				}
				_putchar(44);
				_putchar(32);
				if ((mul + n) >= 10)
				{
					continue;
				}
				_putchar(32);
			}
			else
			{
				a = mul / 10;
				mul = mul % 10;
				_putchar(a + 48);
				_putchar(48 + mul);
				if (i == 9)
				{
					continue;
				}
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
