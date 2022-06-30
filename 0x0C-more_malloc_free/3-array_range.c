#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * array_range - set array with values min to max
  * @min: minimum
  * @max: maximum
  * Return: pointer to array value
  */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (0);
	i = max - min + 1;
	arr = malloc(i * sizeof(int));
	if (!arr)
		return (0);
	for (i = 0; i <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
