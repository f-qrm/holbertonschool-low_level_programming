#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * in a doubly linked list.
 *@h: Pointer to the head of the doubly linked list.
 *@idx: The index where the new node should be inserted (starting from 0).
 *@n: The data to be stored in the new node.
 *Return: The address of the new node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		return (NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;
	return (new_node);
}
