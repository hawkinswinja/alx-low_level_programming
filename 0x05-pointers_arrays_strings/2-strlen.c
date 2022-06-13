#include "main.h"
/**
 * _strlen - return length of string
 * @s: character with strings
 * Return: length of strings
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count)
		;
	return (count);
}
