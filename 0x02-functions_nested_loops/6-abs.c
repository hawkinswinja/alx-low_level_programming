#include "main.h"
/**
 * _abs - return the absolute value of signed digits
 * @n: number to determine sign bit
 * Return: absolute or n
 */
int _abs(int n)
{
	int absolute;

	absolute = n / (-1);
	if (absolute > 0)
	{
		return (absolute);
	}
	else
	{
		return (n);
	}
}
