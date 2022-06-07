#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabets 10x
 * Description: print a-z ten times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
