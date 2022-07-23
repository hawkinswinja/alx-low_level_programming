#include "main.h"
/**
  * _isdigit - check if c is a digit
  * @c: value to check
  * Return: 1 on success 0 on failure
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
