#include <stdio.h>
#include <stdlib.h>

/**
 * main -  check code
 * @argv: array of string
 * @argc: number of arguments passed on command line
 * Description: a program that multiplies two numbers
 * Return: 0 (success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i = 0;

	for (; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents = cents % coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
