#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print all unique triple digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 0;
	b = 0;
	c = 0;
	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a == 7)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
