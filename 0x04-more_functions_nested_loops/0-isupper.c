#include <stdio.h>
/**
 *  _isupper - checks for uppercase char
 *  @c: character to check
 *  Return: 1if uppercase and  0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
