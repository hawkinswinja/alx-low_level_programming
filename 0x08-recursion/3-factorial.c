#include "main.h"
#include <stdio.h>
/**
  * factorial - calculate factorial of n
  * @n: number
  * Return: factorial (Success), -1 (error)
  */
int factorial(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	i = n * factorial(n - 1);
	return (i);
}
