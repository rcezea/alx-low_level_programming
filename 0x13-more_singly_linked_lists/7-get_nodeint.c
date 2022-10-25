#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a list
 * @head: head node
 * @index: index of the node
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head || head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (head);
}
