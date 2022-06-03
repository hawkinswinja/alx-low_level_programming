#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	lower = 'z';
	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
