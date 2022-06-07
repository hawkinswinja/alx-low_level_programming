#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 * Description: using write to putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
