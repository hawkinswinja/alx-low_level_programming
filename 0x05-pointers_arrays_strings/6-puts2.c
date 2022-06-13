#include "main.h"
/**
 * puts2 - puts chars in 2
 * @str: string of characters
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
