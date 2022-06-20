#include "main.h"
#include <stdio.h>
/**
  * _strchr - scan char c in string s
  * @s: string of characters to scan
  * @c: char to look for first instance
  * Return: pointer to s or NULL
  */
char *_strchr(char *s, char c)
{
	int i;
	char *string = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			string = &s[i];
			break;
		}
	}
	return (string);
}
