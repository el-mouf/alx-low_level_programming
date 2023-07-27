#include "lists.h"

/**
 * list_len - gets the number of elements in
 * a linked list
 * @h: a pointer
 * Return: returns the number of elements
 */

size_t list_len(const list_t *h)
{
	if (!h)
	{
		return (0);
	}
	else
	{
		return (1 + list_len(h->next));
	}
}
