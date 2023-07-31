#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Print all the elements of the list
 * @h: pointer to list.
 *
 * Return: Always 0.
 */
unsigned int list_len(const listint_t *h)
{
	unsigned int count;
	const listint_t *temp;

	if (h == NULL)
		return (1);
	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

/**
 * *get_nodeint_at_index - frees a list
 * @head: pointer to list.
 * @index: Int index
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);
	if (list_len(head) < index)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
