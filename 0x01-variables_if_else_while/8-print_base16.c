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
	char alph;

	for (singleDigit = 0; singleDigit <= 9; singleDigit++)
		putchar(singleDigit + '0');
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
