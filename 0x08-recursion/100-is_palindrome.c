#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * reverse - compare end char with start
  * @s: string to reverse
  * @n: end of string
  * @i: start of string
  * Return: 1 or 0
  */
int reverse(char *s, int i, int n)
{
	if (s[i] != s[n])
	{
		return (0);
	}
	if (i < n + 1)
	{
		return (reverse(s, i + 1, n - 1));
	}
	return (1);
}

/**
  * is_palindrome - checks if s is a palindrome
  * @s: string
  * Return: 1 if palindrome , 0 if not
  */
int is_palindrome(char *s)
{
	int a, b;

	a = 0;
	b = strlen(s);
	if (b == 0 || b == 1)
	{
		return (1);
	}
	return (reverse(s, a, b - 1));
}
