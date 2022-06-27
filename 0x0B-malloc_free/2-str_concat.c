#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * str_concat - concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: pointer to joint strings
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = strlen(s1);
	b = strlen(s2);
	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}
