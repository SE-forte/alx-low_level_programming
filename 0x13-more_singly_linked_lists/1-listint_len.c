#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Counts the number of elements in a listint_t linked list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;

	}

	return (len);

}
