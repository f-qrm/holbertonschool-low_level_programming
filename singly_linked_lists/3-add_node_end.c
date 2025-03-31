#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list
 *@head: Pointer to the pointer to the head of the list
 *@str: String to be duplicated and stored in the new node
 *Return: The address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	{
		list_t *new_node, *end;
		unsigned int longeur = 0;

		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		while (str[longeur] != '\0')
		{
			longeur++;
		}
		new_node->len = longeur;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new_node;
		return (new_node);
	}
}
