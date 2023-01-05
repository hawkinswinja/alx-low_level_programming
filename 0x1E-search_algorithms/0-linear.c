#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - searches for value in array iteratively
 * @array: array with set of data to search for
 * @size: number of items in the array
 * @value: value to look for index in array
 * Return: index of value on Success -1 on Failure
 */
int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t i = 0;

		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
