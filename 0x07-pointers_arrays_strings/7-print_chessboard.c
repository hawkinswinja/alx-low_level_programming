#include "main.h"
#include <stdio.h>
/**
  * print_chessboard - print the chess board
  * @a: characters to print
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	char *c = *a;
	int i, n;

	i = 1;
	for (n = 0; n < 64; n++)
	{
		putchar(c[n]);
		if (i % 8 == 0)
		{
			putchar('\n');
		}
		i++;
	}
}
