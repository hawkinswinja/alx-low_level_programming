#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print all unique double digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a == 8)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
