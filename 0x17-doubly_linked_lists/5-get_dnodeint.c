#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list.
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list or NULL if the
 * node does not
 * exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	node = head;
	i = 0;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
