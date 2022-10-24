#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer pointing the head node
 * @n: integer passed
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (n == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
