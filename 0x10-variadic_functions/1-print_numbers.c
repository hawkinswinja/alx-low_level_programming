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

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(print, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
