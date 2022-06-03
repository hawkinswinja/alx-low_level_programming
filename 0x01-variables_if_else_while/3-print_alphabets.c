#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
