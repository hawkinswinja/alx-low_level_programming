#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - check malloc
  * @b: size of memory adress
  * Return: pointer to allocated memory or exit status if null
  */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
