#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: strings 1
 * @src: string 2
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		++n;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
