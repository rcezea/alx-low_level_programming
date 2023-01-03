#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr_ptr = head;

	while (head)
	{
		head = head->next;
		free(fr_ptr);
		fr_ptr = head;
	}
}
