#include "main.h"

/**
 * _strlen - check code
 * @c: the string to be counted
 * Description: count the length of strings
 * Return: length of string - integer
 */

int _strlen(char *c)
{
	int count = 0;

	while (c[count])
		count++;
	return (count);
}

/**
 * create_file - check code
 * @filename: the name of the file
 * @text_content: NULL terminated string
 * Description: a function to create a file
 * Return: NULL or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t write_bytes = write(fd, text_content, _strlen(text_content));

		if (write_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
