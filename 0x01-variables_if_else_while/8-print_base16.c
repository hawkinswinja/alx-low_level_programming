#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;

	hex = 48;
	while (hex < 58)
	{
		putchar(hex);
		hex++;
	}
	hex = 97;
	while (hex < 103)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
