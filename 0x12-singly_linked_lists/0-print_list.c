#include "lists.h"
#include <stdio.h>

/**
 * print_list - check code
 * @h: pointer to head
 * Description: a function to print all the elements
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int nodess = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("\(nill)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodess++;
	}
	return (nodess);
}
