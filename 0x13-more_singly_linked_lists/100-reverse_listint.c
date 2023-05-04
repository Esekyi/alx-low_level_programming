#include "lists.h"

/**
 * reverse_listint - check code
 * @head: pointer to the first node
 * Description: a function that reverses a linked list
 * Return: pointer to the first node of the,
 * reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = previous;
			previous = next;
		}
		*head = previous;
		return (*head);
	}
	return (NULL);
}
