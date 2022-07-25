#include "main.h"
/**
  * append_text_to_file - add text at end of fle
  * @filename: file to edit
  * @text_content: text to write
  * Return: 1 on success, -1 on fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
		wr = write(fd, text_content, strlen(text_content));
	close(fd);
	if (wr < 0)
		return (-1);
	return (1);
}
