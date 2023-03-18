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
	int inner, outer;

	for (outer = 0; outer < 9; outer++)
	{
		for (inner = outer; inner <= 9; inner++)
		{
			if (inner != outer)
			{
				putchar(outer + '0');
				putchar(inner + '0');

				if (outer == 8 && inner == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
