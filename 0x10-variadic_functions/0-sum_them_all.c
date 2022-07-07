#include "variadic_functions.h"
/**
  * sum_them_all - sum all passed arguments
  * @n: number of passed elements
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	va_start(list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	return (sum);
	va_end(list);
}
