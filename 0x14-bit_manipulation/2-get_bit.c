#include "main.h"
/**
  * get_bit - fetch binary equivalent
  * @n: value in deci
  * @index: position of bit
  * Return: nothing
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result = 1, count = 0;
	int i, k = n, *j;

	if (!n)
		return (-1);
	if ((n == 0 || n == 1) && index == 0)
		return (k);
	if ((n == 0 || n == 1) && index > 0)
		return (0);
	while (n > result)
	{
		result *= 2;
		count++;
		if (result * 2 > n)
			break;
	}
	k = count + 1;
	j = malloc(sizeof(int) * k);
	if (!j)
		return (-1);
	for (i = count; i >= 0; i--)
	{
		result = n >> count;
		if (result & 1)
		{
			j[i] = 1;
		}
		else
		{
			j[i] = 0;
		}
		count--;
	}
	return (j[index]);
}
