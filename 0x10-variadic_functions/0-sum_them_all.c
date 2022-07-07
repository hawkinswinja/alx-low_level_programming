#include "variadic_functions.h"
/**
  * sum_them_all - sum all passed arguments
  * @n: number of passed elements
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list add;
	int sum = 0;
	unsigned int i;

	va_start(add, n);
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);
	va_end(add);
	return (sum);
}
