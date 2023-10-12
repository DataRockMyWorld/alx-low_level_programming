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
 * get_dnodeint_at_index - check the code
 * @head: head of list
 * @index: index to get
 *
 * Return: number of nodes.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	if (index > dlistint_len(head) || (head == NULL))
	{
		return (NULL);
	}

	temp = head;
	count = 0;

	while (count != (index))
	{
		temp = temp->next;
		count++;
	}

	return (temp);

}
