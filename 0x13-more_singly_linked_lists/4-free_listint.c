#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer to list.
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
