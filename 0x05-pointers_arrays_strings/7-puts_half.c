#include "main.h"
/**
 * puts_half - return last half o string
 * @str: string to divide
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	count = i;
	if (i % 2 != 0)
	{
		i = (i - 1) / 2;
	}
	else
	{
		i = i / 2;
	}
	for (n = i; n < count; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
