#include "lists.h"

/**
 * free_listint - function that frees a
 * linked list
 * @head: pointer to the head of a linked
 * list
 */

void free_listint(listint_t *head)
{
	listint_t *current_element;

	while (head)
	{
		current_element = head;
		head = head->next;
		free(current_element);
	}
}
