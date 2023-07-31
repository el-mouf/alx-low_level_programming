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

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
