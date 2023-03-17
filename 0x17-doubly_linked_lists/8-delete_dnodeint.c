#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!(*head))
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp && i < index; i++)
		tmp = tmp->next;
	if (!tmp)
		return (-1);
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
