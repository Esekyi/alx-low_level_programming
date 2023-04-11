#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  check code
 * @argv: array of string
 * @argc: number of arguments passed on command line
 * Description: a program that multiplies two numbers
 * Return: 0 (success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
		printf("Error\n");
	return (0);
}
