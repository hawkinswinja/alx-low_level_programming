#include "main.h"
#include <stdio.h>
/**
  * checkprime - check if given number is prime
  * @i: number to check
  * @j: checker
  * Return: 1 or 0
  */
int checkprime(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (checkprime(i, j + 1));
}
/**
  * is_prime_number - verify number if prime
  * @n: number to check
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (checkprime(n, 2));
}
