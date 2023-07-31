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

	if (h == NULL)
		return (1);

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
