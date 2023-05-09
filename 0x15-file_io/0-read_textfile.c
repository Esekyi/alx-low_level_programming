#include "main.h"

/**
 * read_textfile - check code
 * @filename: name of the file to read
 * @letters: the actual letters in the file
 * Description: a function that reads a text file and prints
 * Return: 0 or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (!buffer)
		return (0);
	count = read(fd, buffer, letters);
	if (count == -1)
		return (0);

	buffer[count] = '\0';

	if (write(STDOUT_FILENO, buffer, count) != count)
		return (0);

	close(fd);
	free(buffer);

	return (count);
}
