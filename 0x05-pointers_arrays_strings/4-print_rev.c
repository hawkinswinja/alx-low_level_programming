#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse order
 * @s: characters to print
 * Return: void
 */
void print_rev(char *s)
{
	int n, i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (n = i-1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
