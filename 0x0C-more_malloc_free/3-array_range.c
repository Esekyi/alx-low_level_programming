#include "main.h"
#include <stdlib.h>

/**
 * array_range - check code
 * @min: min array
 * @max: max array
 * Description: A function that allocates memory for an array
 *
 * Return: A pointer to
 */

int *array_range(int min, int max)
{
	int *new_array;
	int differ, j;

	if (min > max)
		return (NULL);

	differ = max - min;
	new_array = malloc((differ + 1) * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= differ; j++)
	{
		new_array[j] = min++;
	}
	return (new_array);
}
