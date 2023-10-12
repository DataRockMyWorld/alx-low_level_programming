#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: node head
 * @n: integer element
 *
 * Return: Address of new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = *head;
		*head = newnode;
		return (*head);
	
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;

	return (*head);
}
