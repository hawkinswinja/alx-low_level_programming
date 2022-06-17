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
	int i, j, tmp;

	j = 0;
	i = n - 1;
	while (j <= i)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i--;
		j++;
	}
}
