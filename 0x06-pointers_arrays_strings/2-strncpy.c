#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy string to destination
 * @dest: receiving variable
 * @src: holds string to copy
 * @n: number of elements to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
