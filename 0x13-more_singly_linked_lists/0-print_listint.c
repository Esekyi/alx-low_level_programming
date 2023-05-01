#include "lists.h"
#include <stdio.h>

/**
 * print_listint - check code
 * @h: pointer to head
 * Description: a function to print all the elements
 * Return: the number of nodes
 */

size_t print_listnt(const listint_t *h)
{
	size_t nodess = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodess++;
	}
	return (nodess);
}
