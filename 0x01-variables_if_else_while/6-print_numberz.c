#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int singleDigit;

	for (singleDigit = 0; singleDigit <= 9; singleDigit++)
		putchar(singleDigit + '0');
	putchar('\n');

	return (0);
}
