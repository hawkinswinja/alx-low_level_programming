#include "main.h"
#include <stdio.h>
/**
  * rot13 - encrypt using leet
  * @src: string to encrypt
  * Return: encrypted src
  */
char *rot13(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		while ((src[i] > 96 && src[i] < 123) || (src[i] > 64 && src[i] < 91))
		{
			if ((src[i] > 96 && src[i] < 110) || (src[i] > 64 && src[i] < 78))
			{
				src[i] += 13;
			}
			else
			{
				src[i] -= 13;
			}
			break;
		}
	}
	return (src);
}
