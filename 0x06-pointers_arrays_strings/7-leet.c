#include "main.h"
#include <stdio.h>
/**
 * leet  - encode using 1337
 * @src: string to encode
 * Return: encoded leet src
 */
char *leet(char *src)
{
	char *enc = "aAeEoOtTlL";
	char *rep = "4433007711";
	int i, n;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (n = 0; enc[n] != '\0'; n++)
		{
			if (src[i] == enc[n])
			{
				src[i] = rep[n];
			}
		}
	}
	return (src);
}
