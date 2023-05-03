#include "main.h"
#include <stdlib.h>

/**
 * argstostr - check code
 * @ac: integer input of number of args
 * @av: pointer to a string input (array)
 * Description: A function that concatenates args
 * Return: NULL or a pointer to a string
 */

char *argstostr(int ac, char **av)
{
	int iter = 0, iter2 = 0, lengt = 0, k = 0;
	char *ptr_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (iter < ac)
	{
    		while (av[iter][iter2])
		{
			lengt++;
			iter2++;
		}
		iter2 = 0;

		iter++;
	}

	ptr_string = malloc((sizeof(char) * lengt) + ac + 1);

	iter = 0;
	while (av[iter])
	{
		while (av[iter][iter2])
		{
			ptr_string[k] = av[iter][iter2];
			k++;
			iter2++;
		}

		ptr_string[k] = '\n';

		iter2 = 0;
		k++;
		iter++;
	}
	k++;
	ptr_string[k] = '\0';

	return (ptr_string);
