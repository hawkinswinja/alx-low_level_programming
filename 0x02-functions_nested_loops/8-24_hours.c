#include "main.h"
/**
 * jack_bauer - time display
 * Return: void
 */
void jack_bauer(void)
{
	int h2, h1, m2, m1;

	for (h2 = 0; h2 <= 2; h2++)
	{
		for (h1 = 0; h1 <= 3; h1++)
		{
			for (m2 = 0; m2 <= 5; m2++)
			{
				for (m1 = 0; m1 <= 9; m1++)
				{
					_putchar('0' + h2);
					_putchar('0' + h1);
					_putchar(58);
					_putchar('0' + m2);
					_putchar('0' + m1);
					_putchar('\n');
				}
			}
		}
	}
}
