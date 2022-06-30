#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * string_nconcat - concatenate src to dest
  * @s1: string 1
  * @s2: string 2
  * @n: number of chars to append to s1
  * Return: pointer to updated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int j = strlen(s1) + n + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(j);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
