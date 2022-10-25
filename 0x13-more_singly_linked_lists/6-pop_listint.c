#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer pointing to head node
 * Return: 0 for empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (i);

}
