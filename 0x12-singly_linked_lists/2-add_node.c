#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head - pointer to the first node
 * @str - data of the new node
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	while (str[i])
		i++;

	new->len = i;
	*head = new;

	return (*head);
}
