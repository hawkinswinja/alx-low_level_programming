#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _print_rev_recursion - print string in reverse
  * @s: string to reverse
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
