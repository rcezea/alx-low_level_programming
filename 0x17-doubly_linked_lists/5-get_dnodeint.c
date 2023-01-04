#include "lists.h"
/**
 * get_dnodeint_at_index -  gets the nth node of the list
 * @head: head node
 * @index: index of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index--)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
