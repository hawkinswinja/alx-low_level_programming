#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * _strdup - duplicate str
  * @str: string to duplicate
  * Return: pointer to dublicate
  */
char *_strdup(char *str)
{
	int i = strlen(str) + 1;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(char) * i);
	if (d == NULL)
	{
		return (NULL);
	}
	strcpy(d, str);
	return (d);
}
