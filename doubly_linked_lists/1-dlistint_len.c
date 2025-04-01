#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Write a function that returns the number
 * of elements in a linked dlistint_t list.
 *@h: Pointer to the first noed in the list.
 *Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
