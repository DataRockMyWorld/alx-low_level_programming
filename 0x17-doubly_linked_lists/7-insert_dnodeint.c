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

/**
 * insert_dnodeint_at_index - check the code
 * @h: head of file
 * @idx: index
 * @n: new value
 *
 * Return: Address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	if (idx > dlistint_len(*h))
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		if (i == idx)
		{
			temp->prev->next = new;
			new->prev = temp->prev;

			new->next = temp;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
