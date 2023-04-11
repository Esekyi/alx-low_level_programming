#include <stdio.h>

/**
 * main -  check code
 * @argv: array of string
 * @argc: number of arguments passed on command line
 * Description: a program that prints its name, followed by a new line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
