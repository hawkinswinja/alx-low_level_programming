#include "main.h"
/**
  * create_file - create file
  * @filename: name of file to create
  * @text_content: data to write to created file
  * Return: 1 on success, -1 on fail
  */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_EXCL | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
		wr = write(fd, text_content, strlen(text_content));
	close(fd);
	if (wr < 0)
		return (-1);
	return (1);
}
