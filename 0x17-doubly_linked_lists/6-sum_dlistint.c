#include "lists.h"
/**
 * sum_dlistint - sum of all data in list
 * @head: head node
 * Return: sum of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
