#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n1;
	list_t *t1 = *head;
	unsigned int l1 = 0;

	while (str[l1])
		l1++;

	n1 = malloc(sizeof(list_t));
	if (!n1)
		return (NULL);

	n1->str = strdup(str);
	n1->len = l1;
	n1->next = NULL;

	if (*head == NULL)
	{
		*head = n1;
		return (n1);
	}

	while (t1->next)
		t1 = t1->next;

	t1->next = n1;

	return (n1);
}
