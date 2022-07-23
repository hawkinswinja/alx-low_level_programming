#include "main.h"
/**
  * print_numbers - prints numbers 0 to 9
  * Return: nothing
  */
void print_numbers(void)
{
	char c = '0';

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
