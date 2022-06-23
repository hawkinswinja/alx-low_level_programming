#include "main.h"
#include <stdio.h>
/**
  * _sqrt - find sqrt
  * @i: number to sqquare root
  * @l: start of root
  * Return: the squareroot of i
  */
int _sqrt(int i, int l)
{
	if (l * l == i)
	{
		return (l);
	}
	if (l * l > i)
	{
		return (-1);
	}
	l++;
	return (_sqrt(i, l));
}
/**
  * _sqrt_recursion - find squareroot
  * @n: number to square root
  * Return: sqrt or -1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(n, 2));
}
