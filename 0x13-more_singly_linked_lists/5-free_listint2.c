#include "lists.h"
/**
 * free_listint2 - frees the list
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
