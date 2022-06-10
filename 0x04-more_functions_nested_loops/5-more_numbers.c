#include "main.h"
/**
 * more_numbers - print 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, o, n;

	for (o = 0; o < 10; o++)
	{
		for (n = 0; n < 2; n++)
		{
			for (i = 48; i < 58; i++)
			{
				if (n == 1)
				{
					_putchar(49);
				}
				_putchar(i);
				if (n == 1 && i == 52)
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
