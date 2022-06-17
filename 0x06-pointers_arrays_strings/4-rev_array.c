#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse elements of array
 * @n: number of elements of array
 * @a: array to reverse
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int *b;

	*b = 0;
	for (i = 0; i < n && a[i] != '\0'; i++)
	{
		b[i] = a[i];
	}
	for (j = --n; j >= 0; --j)
	{
		a[j] = b[i];
		n--;
		i--;

	}
}
