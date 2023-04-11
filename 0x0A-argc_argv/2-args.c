#include <stdio.h>
#include "main.h"

/**
 * main -  check code
 * @argv: array of string
 * @argc: number of arguments passed on command line
 * Description: a program that printsr
 * all arguments, followed by a new line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
