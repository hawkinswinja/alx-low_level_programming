#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - iterates values of array
  * @array: passed array
  * @size: size of array
  * @action: function pointer
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size <= 0)
		return;
	for (; i < size; i++)
		action(array[i]);
}
