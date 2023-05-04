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
	listint_t *newNode, *cur_node;
	unsigned int i;

	if (!head)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	cur_node = *head;
	for (i = 0; cur_node && i < idx - 1; i++)
		cur_node = cur_node->next;

	if (i == idx - 1 || !cur_node)
	{
		newNode = malloc(sizeof(listint_t));
		if (!newNode)
			return (NULL);
		newNode->n = n;
		newNode->next = NULL;

		if (!cur_node)
			cur_node = *head;

		if (i == idx - 1)
		{
			newNode->next = cur_node->next;
			cur_node->next = newNode;
		}
		else
		{
			while (cur_node->next)
				cur_node = cur_node->next;
			cur_node->next = newNode;
		}

		return (newNode);
	}

	return (NULL);
}
