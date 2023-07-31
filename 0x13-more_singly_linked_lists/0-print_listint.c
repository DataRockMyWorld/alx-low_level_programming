#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all the elements of the list
 * @h: pointer to list.
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *temp;

	if (h == NULL)
		return (1);

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
