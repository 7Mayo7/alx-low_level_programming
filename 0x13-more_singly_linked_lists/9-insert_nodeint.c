#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Integer to be added to the new node.
 * Return: Address of the new node, or NULL if it failed.
 * If index is greater than the number of elements, NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
	if (current == NULL)
	{
	free(new_node);
	return (NULL);
	}
	current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
