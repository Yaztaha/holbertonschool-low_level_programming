#include "holberton.h"
/**
 * append_text_to_file - append text at end of a file.
 * @filename: file to append.
 * @text_content: text to append.
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int wr_f;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
		i++;
	wr_f = write(fd, text_content, i);
	if (wr_f == -1)
		return (-1);
	close(fd);
	return (1);
}
