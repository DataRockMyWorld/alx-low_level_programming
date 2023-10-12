#include "lists.h"

/**
 * sum_dlistint - sum of elements
 * @head: head of node
 *
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tp;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	tp = head;
	sum = 0;

	while (tp != NULL)
	{
		sum = sum + tp->n;
		tp = tp->next;
	}
	return (sum);
}
