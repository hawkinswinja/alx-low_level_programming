#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse order
 * @s: characters to print
 * Return: void
 */
void print_rev(char *s)
{
	int i, count;

	count = 0
	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}
		;
	for (; s[count] >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
