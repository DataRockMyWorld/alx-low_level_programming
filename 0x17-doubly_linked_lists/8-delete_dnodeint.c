
#include "lists.h"
/**
 * delete_dnodeint_at_index - Adds a node to the beginning
 * of a  doubly linked list
 * @head: Double pointer to the head node
 * @index: New member value
 * Return: NULL or new address
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next)
		temp->next->prev = temp->prev;

	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
