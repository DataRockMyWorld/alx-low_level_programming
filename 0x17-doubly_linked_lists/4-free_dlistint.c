#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @head: Pointer to the head
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
