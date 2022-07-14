#include <stdio.h>
/**
  * printbeforemain - execute printf function before main
  * Return: nothing
  */
void printbeforemain(void) __attribute__ ((constructor));
void printbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
