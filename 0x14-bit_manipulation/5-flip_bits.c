#include "main.h"
/**
  * flip_bits - flip bits to obtain number m;
  * @n: number 1
  * @m: number 2
  * Return: number of digits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
