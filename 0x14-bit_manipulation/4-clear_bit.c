#include "main.h"
/**
  * clear_bit - set bit to 0 at index position
  * @n: value in deci
  * @index: position of bit
  * Return: 1 on success -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = *n;

	if (!n)
		return (-1);
	if (((a >> index) & 1) == 1)
		a -= (1 << index);
	*n = a;
	return (1);
}
