#include "lists.h"

/**
 * add_nodeint_end - check code
 * @head: first element in the list
 * @n: new node to be added at the end
 * Description: a function that adds a new node
 * at the end of a linked list
 * Return: the address of the the new node or NULL,
 * if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = (*head);
		*head = newNode;
	}
	else
	{
		temp = (*head);
		newNode->next = NULL;
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
