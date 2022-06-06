#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print all unique two two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(32);
					putchar('0' + c);
					putchar('0' + d);
					if (a == 9 && b == 8 && c == d)
					{
						break;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
