#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrt;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	nread = read(fd, buff, letters);
	nwrt = write(STDOUT_FILENO, buff, nread);

	close(fd);

	free(buff);

	return (nwrt);
}
