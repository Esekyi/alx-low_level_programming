#include "lists.h"

/**
 * insert_nodeint_at_index - check code below
 * @head: first node
 * @idx: index of the list
 * @n: integer
 * Description: function that inserts a new node at an index
 * Return: the address of the new node, or NULL if otherwise.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempList = *head;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	while (tempList != NULL && i < idx - 1)
	{
		tempList = tempList->next;
		i++;
	}

	if (tempList == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = tempList->next;
	tempList->next = newNode;
	return (newNode);
}
