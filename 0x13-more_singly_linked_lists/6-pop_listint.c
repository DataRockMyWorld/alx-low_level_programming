#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - frees a list
 * @head: pointer to list.
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int c;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	c = temp->n;
	free(temp);

	return (c);
}
