#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: head of node
 * @n:integer
 * Return: Number of elements in linked list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;

	return (*head);

}
