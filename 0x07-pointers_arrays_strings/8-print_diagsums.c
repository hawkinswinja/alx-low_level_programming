#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - sum of diagonal of square matrix
  * @a: array of square matrix
  * @size: size of square matrix
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int *arr = a;
	int diag1 = 0, diag2 = 0, i, n;

	n = size + 1;
	for (i = 0; i < (size * size); i += n)
	{
		diag1 = diag1 + *(arr + i);
	}
	n = size - 1;
	for (i = n; i < (size * size - 1); i += n)
	{
		diag2 = diag2 + *(arr + i);
	}
	printf("%d, %d\n", diag1, diag2);
}
