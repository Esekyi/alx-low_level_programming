#include <stdio.h>
#include "main.h"

/**
 * main -  check code
 * @argv: array of string
 * @argc: number of arguments passed on command line
 * Description: a program that prints the number
 * of arguments, followed by a new line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
	{
		_putchar('0');
		_putchar('\n');
	}

	return (0);
}
