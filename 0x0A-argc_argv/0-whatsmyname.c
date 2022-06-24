#include <stdio.h>
/**
  * main - program entry point
  * @argc: number of arguments passed to program
  * @argv: array of strings passedd to program
  * Return: 0
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
