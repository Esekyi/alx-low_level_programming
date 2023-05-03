#include "lists.h"

/**
 * sum_listint - cheack code
 * @head: first node in the list
 * Description: a function that returns the sum of all,
 * data (n) of a linked list.
 * Return: 0.
 */

int sum_listint(listint_t *head)
{
	int summ = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
