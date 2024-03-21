#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - doubly linked list
 * @h: head
 *
 * Description: doubly linked list node structure
 * Return: integer (counts of the data)
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return  (count);
}
