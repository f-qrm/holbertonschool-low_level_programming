#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 *@head: Double pointer to the head of the list.
 *@n: The integer value to be added to the new node.
 *Return: A pointer to the newly added node, or NULL if memory allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_noed, *temp;

	new_noed = malloc(sizeof(dlistint_t));
	if (new_noed == NULL)
	{
		return (NULL);
	}

	new_noed->n = n;
	new_noed->next = NULL;
	if (*head == NULL)
	{
		new_noed->prev = NULL;
		*head = new_noed;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_noed;
		new_noed->prev = temp;
	}
	return (new_noed);
}
