#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: head of node
 *
 * Return: Number of elements in linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		exit(0);

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
