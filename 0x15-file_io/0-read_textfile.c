#include "main.h"
/**
  * read_textfile - read contents of file and print to stdout
  * @filename: path of file name
  * @letters: number of char to read
  * Return: number of char read, 0 on failure
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *c = malloc(sizeof(char) * letters + 1);

	if (!c)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	rd = read(fd, c, letters);
	if (rd < 0)
		return (0);
	wr = write(STDOUT_FILENO, c, rd);
	if (wr < 0 || wr < rd)
		return (0);
	close(fd);
	free(c);
	return (wr);
}
