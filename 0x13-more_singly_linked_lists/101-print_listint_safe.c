#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int is_loop = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
	{
	is_loop = 1;
	break;
	}
	}

	if (is_loop)
	{
	printf("-> [%p] %d\n", (void *)head, head->n);
	count++;
	return (count);
	}

	while (head)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	count++;
	}

	return (count);
}
