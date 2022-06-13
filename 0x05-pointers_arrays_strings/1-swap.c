#include "main.h"
/**
 * swap_int - swap values a and b
 * @a: value to swap with b
 * @b: value to swap with a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
