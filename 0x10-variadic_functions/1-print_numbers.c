#include "variadic_functions.h"
/**
  * print_numbers - print given numbers
  * @separator: separator character
  * @n: number of elements
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	int j;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(print, int);
		printf("%i", j);
		if (i == n - 1)
			break;
		if (separator)
			printf("%s", separator);
	}
	va_end(print);
	_putchar('\n');
}
