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

	i = 0, j = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	for (; j < n; j++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
