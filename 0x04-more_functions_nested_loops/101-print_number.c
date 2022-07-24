#include "main.h"
/**
  * print_number - print integer number
  * @n: value to display
  * Return: nothing
  */
void print_number(int n)
{
	int a = 0, b, rem = n;

	if (n < 0)
	{
		n = n / -1; 
		_putchar('-');
	}
	while (n >= 10)
	{
		n = n / 10;
		a++;
	}
	n = 1;
	while (a > 0)
	{
		n *= 10;
		a--;
	}
	while (n > 0)
	{
		b = rem;
		rem = b % n;
		b = b / n;
		n = n / 10;
		_putchar(b + '0');
	}
}
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
