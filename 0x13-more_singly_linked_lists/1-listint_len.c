#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Print all the elements of the list
 * @h: pointer to list.
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *temp;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
