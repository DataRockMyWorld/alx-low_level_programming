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

	if (h == NULL)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
