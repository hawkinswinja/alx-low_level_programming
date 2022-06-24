#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - sum numbers in argv
  * @argc: number of arguments
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int c = 0, n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (n = 1; n < argc; n++)
	{
		char *ptr;
		long ret = strtol(argv[n], &ptr, 10);

		if (strlen(ptr) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			c += ret;
		}
	}
	printf("%d\n", c);
	return (0);
}
