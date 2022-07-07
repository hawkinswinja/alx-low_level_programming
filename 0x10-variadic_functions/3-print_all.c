#include "variadic_functions.h"
/**
  * print_all - replicate function printf
  * @format: variable type
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list printall;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(printall, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(printall, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(printall, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(printall, double)), c = 1;
			break;
		case 's':
			str = va_arg(printall, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(printall);
}
