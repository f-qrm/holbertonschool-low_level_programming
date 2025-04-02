#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  * delete_dnodeint_at_index - Deletes a node at a
 * specific index in a doubly linked list.
 *@head: A pointer to the head of the list.
 *@index: The index of the node to be deleted.
 *Return: 1 if the node was successfully deleted, -1 if an error occurred.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	if (*head == current)
	{
		*head = current->next;
	}
	free(current);
	return (1);
}
