#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginnning of a listint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */

int main(void)

{
	listint_t *head = NULL;
	listint_t *current;

	add_nodeint(&head, 3);
	add_nodeint(&head, 2);
	add_nodeint(&head, 1);

	current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

	return (0);
}
