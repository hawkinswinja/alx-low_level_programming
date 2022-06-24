#include "main.h"
/**
 * _islower - checks for lower alphabets
 * @c: the character to pass
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
