#include "main.h"
#include <stdio.h>
/**
  * _strlen_recursion - returns length of string
  * @s: string
  * Return: length int
  */
int _strlen_recursion(char *s)
{
	int n = 0, len = 0;
	++n;
	if (s[n] == '\0')
	{
		return (len + 1);
	}
	len = n + _strlen_recursion(&s[n]);
	return (len);
}
