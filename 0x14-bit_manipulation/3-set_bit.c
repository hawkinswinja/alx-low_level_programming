#include "main.h"
/**
  * set_bit - set bit to 1 at index position
  * @n: value in deci
  * @index: position of bit
  * Return: 1 on success -1 on failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = *n;

	if (!n)
		return (-1);
	if (((a >> index) & 1) == 0)
		a += (1 << index);
	*n = a;
	return (1);
}
