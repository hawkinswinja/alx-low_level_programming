#include "main.h"
/**
 * puts2 - puts chars in 2
 * @str: string of characters
 * Return: void
 */
void puts2(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (n = 0; n + 2 <= i; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

