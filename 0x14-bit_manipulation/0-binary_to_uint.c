#include "main.h"
/**
  * binary_to_uint - convert binary number to unsigned int
  * @b: binary number
  * Return: decimal equivalent
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0, n = 0;
	int i = strlen(b) - 1;

	if (!b)
		return (0);

	for (; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci = deci + (b[i] - 48) * (1 << n);
		n++;
	}
	return (deci);
}
