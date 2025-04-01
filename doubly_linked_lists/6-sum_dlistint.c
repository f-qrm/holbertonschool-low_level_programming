#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 *@head: A pointer to the first node of the doubly linked list.
 *Return: The sum of all the data (n) in the linked list,
 *or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
