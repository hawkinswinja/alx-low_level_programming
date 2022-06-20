#include "main.h"
#include <stdio.h>
/**
  * _memset - fill n bytes with char b
  * @s: pointer array to fill
  * @b: char to fill
  * @n: number of bytes to fill
  * Return: pointer to s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
