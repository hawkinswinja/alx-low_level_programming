#include "main.h"
/**
 * _strcpy - copy string inn source to pointed destination
 * @src: holds string to copy
 * @dest: pointer to copy details to
 * Return: pointer to the dest value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
