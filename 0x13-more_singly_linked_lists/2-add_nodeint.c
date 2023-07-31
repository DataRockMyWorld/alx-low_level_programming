#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - Adds nodes to the behinning of the list
 * @head: pointer to list.
 * @n: integer
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
