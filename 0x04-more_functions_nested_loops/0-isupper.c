#include "main.h"
/**
  * _isupper - checks if c is uppercase
  * @c: character to check
  * Return: 1 is upper 0 if not
  */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
