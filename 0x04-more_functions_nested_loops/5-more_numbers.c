#include "main.h"
/**
  * more_numbers - print numbers to 14
  * Return: nothing
  */
void more_numbers(void)
{
	int a = 0, b;
	char c, c2;

	while (a < 11)
	{
		c = 48;
		c2 = 48;
		for (b = 0; b < 15; b++)
		{
			if (c2 == 53)
				break;
			if (b > 9)
				c = 49;
			_putchar(c);
			if (b > 9)
			{
				_putchar(c2);
				c2++;
			}
			c++;
		}
		_putchar('\n');
		a++;
	}
}
