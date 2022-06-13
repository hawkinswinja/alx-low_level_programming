#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of arrays
 * @n: number of elements
 * @a: array to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	putchar('\n');
}
