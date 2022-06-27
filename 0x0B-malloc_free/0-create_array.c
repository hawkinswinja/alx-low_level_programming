#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - checks size of array
  * @size: size of array in bits
  * @c: character to initialize array
  * Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
	int i = size, n = 0;
	char *a;

	if (i == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	while (n < i)
	{
		a[n] = c;
		n++;
	}
	return (a);
}
