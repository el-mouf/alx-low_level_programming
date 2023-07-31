#include "lists.h"

/**
 * listint_len - function that gives the number
 * of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elementCount = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		elementCount++;
		current = current ->next;
	}
	return (elementCount);
}
