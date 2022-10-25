#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at any given position
 * @head: pointer pointing to the head node
 * @idx: index of the new node
 * @n: integer passed
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *after_tmp = *head;
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = after_tmp;
		*head = tmp;
		return (tmp);
	}

	while (i < (idx - 1))
	{
		if (after_tmp == NULL || after_tmp->next == NULL)
			return (NULL);
		after_tmp = after_tmp->next;
		i++;
	}
	tmp->next = after_tmp->next;
	after_tmp->next = tmp;
	return (tmp);
}
