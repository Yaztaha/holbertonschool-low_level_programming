#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: name of the created file.
 * @text_content: text to include in the created file.
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int wr_f;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
