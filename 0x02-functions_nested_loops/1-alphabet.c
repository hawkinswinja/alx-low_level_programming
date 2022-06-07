#include "main.h"
/**
 * print_alphabet - entry point
 * Description: display lowercase letters using putchar
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
