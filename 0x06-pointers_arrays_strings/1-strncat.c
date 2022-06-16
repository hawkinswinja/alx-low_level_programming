#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenate two strings with n bytes
 * @dest: strings 1
 * @src: string 2
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	if (n == 0)
	{
		dest[i] = '\0';
	}
	else
	{
		j = 0;
		while (j <= n)
		{
			dest[i] = src[j];
			++j;
		}
	}
	return (dest);
}
