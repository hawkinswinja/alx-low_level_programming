#include <stdio.h>
#include "main.h"
/**
  * _strpbrk - count number of occurences in s from accept
  * @s: string to scan
  * @accept: chars to check
  * Return: pointer to s
  */
char *_strpbrk(char *s, char *accept)
{
	char *n = '\0';
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				c = s[i];
			}
		}
		if (c == s[i])
		{
			n = &s[i];
			break;
		}
	}
	return (n);
}
