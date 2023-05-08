#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content:  the NULL terminated string to add at the end of file
 * Return: 1 0n success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;
	int num_letters = 0;

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
	while (text_content[num_letters])
		num_letters++;
	nwrite = write(fd, text_content, num_letters);

	if (nwrite == -1)
		return (-1);

	close(fd);

	return (1);
}
