#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - print name
  * @name: name of the person
  * @f: receives incoming print name function
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
