#include "lists.h"

/**
 * insert_nodeint_at_index - check code below
 * @head: first node
 * @idx: index of the list
 * @n: ...
 * Description: function that inserts a new node at an index
 * Return: the address of the new node, or NULL if otherwise.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempList;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		newNode->n = n;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;

		return (newNode);
	}
	tempList = *head;

	while (i < idx)
	{
		tempList = tempList->next;
		i++:
	}

	newNode->n = n;
	newNode->next = tempList->next;
	tempList->next = newNode;
	return (newNode);
}
