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
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
