#include "main.h"
/**
  * print_most_numbers - do not print 2 and 4
  * Return: nothing
  */
void print_most_numbers(void)
{
	char c = 48;

	for (; c < 58; c++)
	{
		if (c == '2' || c == '4')
			continue;
		else
			_putchar(c);
	}
	_putchar('\n');
}
