#include <stdio.h>
#include "main.h"
/**
  * _memcpy - copy n byts from src and fill to dest
  * @dest: destination pointer
  * @src: source pointer
  * @n: number of bytes to copy
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
