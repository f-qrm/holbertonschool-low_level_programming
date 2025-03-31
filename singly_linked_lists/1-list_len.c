#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list.
 *@h: Pointer to the first node in the list.
 *Return: The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while(h != 0)
	{
		h= h->next;
		count++;
	}

	return(count);
}
