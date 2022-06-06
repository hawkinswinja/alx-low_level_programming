#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print all unique two two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c,d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = b + 1; d < 10; d++)
				{
					printf("%d%d %d%d,",a,b,c,d );
				}
			}
		}
	}
	return (0);
}
