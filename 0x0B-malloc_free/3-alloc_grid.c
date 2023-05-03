#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - check code
  * @width: width of grid
  * @height: height of grid
  * Description: returns a pointer to a 2 dimensional array
  * Return: a pointer to a 2 dimensional array
  */

int **alloc_grid(int width, int height)
{
	int count, n, counter, iter;
	int **pointr;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointr = malloc(sizeof(int *) * height);

	if (pointr == NULL)
	{
		free(pointr);
		return (NULL);
	}

	for (iter = 0; iter < height; iter++)
	{
		pointr[iter] = malloc(sizeof(int) * width);

		if (pointr[iter] == NULL)
		{
			for (count = iter; count >= 0; count--)
			{
				free(pointr[count]);
			}

			free(pointr);
			return (NULL);
		}
	}

	for (counter = 0; counter < height; counter++)
	{
		for (n = 0; n < width; n++)
		{
			pointr[counter][n] = 0;
		}
	}

	return (pointr);
}
