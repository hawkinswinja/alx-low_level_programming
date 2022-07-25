#include "main.h"
/**
  * main - copy contents of file src to file dest
  * @ac: argument counter
  * @av: argument vector
  * Return: 1 on success, fails have exit status
  */
int main(int ac, char **av)
{
	int fdr, fdw, rd = 1, wr;
	char *content = malloc(1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(av[1], O_RDONLY);
	if (fdr < 0)
		failread(av[1]);
	fdw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdw < 0 || !content)
		failwrite(av[2]);
	while (rd)
	{
		rd = read(fdr, content, 1024);
		if (rd < 0)
		{
			funcclose(fdr);
			funcclose(fdw);
			failread(av[1]);
		}
		if (rd == 0)
			break;
		wr = write(fdw, content, rd);
		if (wr < 0)
		{
			funcclose(fdr);
			funcclose(fdw);
			failwrite(av[2]);
		}
	}
	free(content);
	if (funcclose(fdr) < 0 || funcclose(fdw) < 0)
		exit(100);
	return (0);
}
/**
  * funcclose - close socket
  * @error: fd to close
  * Return: 0 on success, -1 on fail
  */
int funcclose(int error)
{
	if (close(error) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", error);
		return (-1);
	}
	return (0);
}
/**
  * failwrite - exit status on write
  * @a: file to write to
  * Return: nothing
  */
void failwrite(char *a)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", a);
	exit(99);
}
/**
  * failread - exit status read
  * @a: file to read
  * Return: nothing
  */
void failread(char *a)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
	exit(98);
}

