#include <stdio.h>
#include "main.h"
/**
  * _strspn - count number of occurences in s from accept
  * @s: string to scan
  * @accept: chars to check
  * Return: number of occurences
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
			}
		}
	}
	return (n);
}
