#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse order
 * @s: characters to print
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
