#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current;

	if (h == NULL || *h == NULL)
	return (0);

	current = *h;

	while (current != NULL)
	{
	count++;
	temp = current;
	current = current->next;

	if (temp <= current)
	{
	*h = NULL;
	return (count);
	}

	free(temp);
	}

	*h = NULL;
	return (count);
}
