#include "3-calc.h"
/**
  * main - check code
  * @argc: argument counter
  * @argv: argument vector
  * Return: result on success
  */
int main(int argc, char *argv[])
{
	int val1 = 0, val2 = 0;
	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	calculate = get_op_func(argv[2]);
	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calculate(val1, val2));
	return (0);
}
