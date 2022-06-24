#include "main.h"
#include <stdio.h>
/**
 * _strcmp - check for matching chars
 * @s1: string 1
 * @s2: string 2
 * Return:difference of ascii value between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	result = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			result = (48 + s1[i]) - (48 + s2[i]);
			break;
		}
	}
	return (result);
}
