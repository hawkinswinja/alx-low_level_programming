#include "variadic_functions.h"
/**
  * print_strings - print passed strings
  * @separator: symbol separator
  * @n: number of strings
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *j;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(string, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
