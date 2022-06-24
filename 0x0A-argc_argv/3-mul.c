#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiply two numbers
  * @argc: argument counter
  * @argv: argument vectors
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[argc - 2]);
	b = atoi(argv[argc - 1]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}

