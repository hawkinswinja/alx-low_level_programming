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
	int i = strlen(str);
	char *d = malloc(sizeof(char) * i);

	if (str == NULL || d == NULL)
	{
		return (NULL);
	}
	strcpy(d, str);
	return (d);
}
