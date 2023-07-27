#include "lists.h"

/**
 * free_list - function frees a list
 * @head: a pointer
 */

void free_list(list_t *head)
{
	list_t *current_node, *next;

	current_node = head;
	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
