#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  check code
 * @argv: array of string
 * @argc: number of arguments passed on command line
 * Description: a program that multiplies two numbers
 * Return: 0 (success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int count, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		char *num = argv[count];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);
	}
	printf("%d\n", sum);
	return (0);
}
