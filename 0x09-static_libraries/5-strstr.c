#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strstr - searches for substring in a string
  * @haystack: string to search for substring
  * @needle: substring to seach for in haystack
  * Return: return needle or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (strncmp(haystack, needle, strlen(needle)) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
