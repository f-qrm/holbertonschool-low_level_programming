#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - This function returns the node at
 * a specified index in a doubly linked list.
 *@head: A pointer to the head of the doubly linked list.
 *@index: The index of the node to retrieve (starting from 0).
 *Return: The node at the specified index, or NULL if the index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
	{
	return (NULL);
	}
	current = head;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
		return (NULL);
}
