#include "lists.h"

/**
 * print_listint - function that prints all elements
 * of a list
 * @h: pointer to the head of a linked list
 * Return: returns the count of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;
	const listint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodeCount++;
	}
	return (nodeCount);
}
