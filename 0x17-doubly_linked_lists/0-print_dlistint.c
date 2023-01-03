#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint_s list
 * @h: head node
 * Return: number of nodes in a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
