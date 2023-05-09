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
 * append_text_to_file - check code
 * @filename: file name
 * @text_content: the actual text
 * Description: afunction that appends text to the end of a file
 * Return: -1 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
