#include "holberton.h"
/**
 * read_textfile - function that read read a text file.
 * @filename: file pointer.
 * @letters: number of letters in the file.
 * Return: number of printed chars.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, pr_wr, rd_f;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd_f = read(fd, buf, letters);
	if (rd_f == -1)
		return (0);
	buf[rd_f] = '\0';

	pr_wr = write(STDOUT_FILENO, buf, rd_f);
	if (pr_wr == -1)
		return (0);

	fd = close(fd);
	if (fd == -1)
		return (0);

	free(buf);
	return (pr_wr);
}
