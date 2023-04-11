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
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
