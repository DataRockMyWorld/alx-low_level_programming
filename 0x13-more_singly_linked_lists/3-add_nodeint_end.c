#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - Adds nodes to the end of the list
 * @head: pointer to list.
 * @n: integer
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	temp = (*head);
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
