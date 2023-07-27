#include "lists.h"

/**
 * print_list - function prints elements of a list
 * @h: a pointer
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		number++;
	}
	return (number);
}
