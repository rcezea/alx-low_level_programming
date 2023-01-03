#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: head node
 * @n: data of new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	tmp = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	new->prev = tmp;
	new->next = NULL;
	return (new);
}
