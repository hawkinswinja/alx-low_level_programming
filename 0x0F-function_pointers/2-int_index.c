#include "function_pointers.h"
#include <stdio.h>
/**
  * int_index - searches for index
  * @array: array of integers
  * @size: size of array
  * @cmp: function to compare
  * Return: index of integer on success -1 on failure
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j = 0;

	if (size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}

