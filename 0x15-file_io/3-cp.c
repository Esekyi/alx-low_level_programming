#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, check code.
 * @argc: argument count, number passed
 * @argv: pointers to agument array.
 * Description: Main Entry point to the program
 * Return: 1 if success and -1 on fail
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp_file(argv[1], argv[2]);
	exit(0);
}

/**
 * _cp_file - check code
 * @src: source file
 * des: destination 
 * Description: nothing here
 * Return: 1 or -1
 */

void _cp_file(const char *src, const char *des)
{
	int _read, fd, cfd;
	char buffer[1024];

	cfd = open(src, O_RDONLY);
	if (!src || cfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd = open(des, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	while ((_read = read(cfd, buffer, 1024)) > 0)
	{
		if (write(fd, buffer, _read) != _read || fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", des);
			exit(99);
		}
	}

	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(cfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cfd);
		exit(100);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
