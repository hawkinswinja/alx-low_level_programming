#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize each word
 * @src: stinrg to capitalize
 * Return: src
 */
char *cap_string(char *src)
{
	char *s = ",.?;\"(){}!";
	int i, n;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (src[i] > 96 && src[i] < 123)
			{
				src[i] -= 32;
			}
		}
		if (src[i] == ' ' || src[i] == '\n' || src[i] == '\t')
		{
			++i;
			if (src[i] > 96 && src[i] < 123)
			{
				src[i] -= 32;
			}
		}
		else
		{
			for (n = 0; s[n] != '\0'; n++)
			{
				if (src[i] == s[n])
				{
					++i;
					if (src[i] > 96 && src[i] < 123)
					{
						src[i] -= 32;
					}
				}
			}
		}
	}
	return (src);
}
