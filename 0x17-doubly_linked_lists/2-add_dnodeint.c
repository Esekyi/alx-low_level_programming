#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - check code
 * @head: head of the doubly linked list
 * @n: integer to be added at the end of the list
 * Description:  function that adds a new node
 * at the beginning of a dlistint_t list
 * Return: the pointer address or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}
	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	/* Update the previous pointer of the current head */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node; /* Set the new node as the head */

	return (new_node);
}
