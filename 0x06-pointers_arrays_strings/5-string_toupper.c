#include <stdio.h>
#include "main.h"
/**
 * string_toupper - convert lower char to upper alpha
 * @str: source string
 * Return: alpha char of src
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] + '0' > 97 && str[i] + '0' < 123)
		{
			str[i] = (str[i] + '0' - 32);
		}
	}
	return (str);
}
