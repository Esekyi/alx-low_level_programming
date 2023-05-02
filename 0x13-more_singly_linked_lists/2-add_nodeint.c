#include "lists.h"

/**
 * add_nodeint - check code
 * @head: first element in the list
 * @n: new node
 * Description: a function that adds a ned
 * w node at the beginning of a linked list
 * Return: the address of the the new node or NULL,
 * if otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = (*head);
		*head = newNode;

		return (newNode);
	}

	return (NULL);
}
