#include "main.h"
#include <stdio.h>
/**
  * _pow_recursion - power n to given number y
  * @x: number to power
  * @y: number raised to
  * Return: power of x or -1
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
