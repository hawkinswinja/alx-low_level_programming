#include <stdio.h>
/**
  * main - print arguments to run program
  * @argc: number of parameters
  * @argv: array of strings that run the program
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int n = 0;

	for (; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
