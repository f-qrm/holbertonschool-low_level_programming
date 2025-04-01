#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 *@head: A pointer to the pointer of the head of the doubly linked list.
 *@n: The integer value to be added to the new node.
 *Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_noed;

	new_noed = malloc(sizeof(dlistint_t));
	if (new_noed == NULL)
	{
		return (NULL);
	}
	new_noed->n = n;
	new_noed->prev = NULL;
	new_noed->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_noed;
	}
	*head = new_noed;
	return (new_noed);
}
