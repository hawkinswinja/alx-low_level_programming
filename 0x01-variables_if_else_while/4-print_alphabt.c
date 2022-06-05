#include <stdio.h>
/**
 * main - entry point
 *Description: Display alphabets without letters e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
