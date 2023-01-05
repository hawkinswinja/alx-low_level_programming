#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - split into two and searches array
 * @array: array with sorted values
 * @size: size of array to search in
 * @value: lookup value
 * Return: index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;

	while (l <= r)
	{
		int m = (l + r) / 2;

		if (m == r)
			return (m);
		printf("Searching in array: ");
		print_array(array, l, r);
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}

/**
 * print_array - print values of array
 * @list: array to print
 * @s: start of array
 * @e: end of array
 * Return: nothing
 */
void print_array(int *list, size_t s, size_t e)
{

	while (s <= e)
	{
		printf("%d", list[s]);
		if (s != e)
			printf(", ");
		s++;
	}
	printf("\n");
}
