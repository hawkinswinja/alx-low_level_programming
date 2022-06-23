#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * rev_string - reverse string
  * @s: string to reverse
  * Return: void
  */
void rev_string(char *s)
{
	int n = 0, i = strlen(s) - 1;
	char tmp;

	for (; n < i; n++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + n);
		*(s + n) = tmp;
		i--;
	}
}
