#include "3-calc.h"
/**
  * op_add - add a and b
  * @a: value 1
  * @b: value 2
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtract a and b
  * @a: value 1
  * @b: value 2
  * Return: sub
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiply a and b
  * @a: value 1
  * @b: value 2
  * Return: mul
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div- divide a and b
  * @a: value 1
  * @b: value 2
  * Return: div
  */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - remainder a and b
  * @a: value 1
  * @b: value 2
  * Return: sum
  */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
