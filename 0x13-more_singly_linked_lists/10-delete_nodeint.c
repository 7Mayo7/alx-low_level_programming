#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	current = *head;

	if (index == 0)
	{
	*head = (*head)->next;
	free(current);
	return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
	if (current->next == NULL)
	return (-1);
	current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
