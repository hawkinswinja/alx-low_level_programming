#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _calloc - duplicate calloc function
  * @nmemb: number of elements
  * @size: size in byte
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
		ptr[n] = 0;
	return (ptr);
}
