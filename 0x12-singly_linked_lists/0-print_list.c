#include "lists.h"

/**
 * print_list - prints all the elements of a list_l list
 * @h: the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->str != NULL)
	{
		if (h != NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
