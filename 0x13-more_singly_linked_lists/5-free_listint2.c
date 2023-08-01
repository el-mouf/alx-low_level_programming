#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: a double pointer to the head of a linked
 * list
 */

void free_listint2(listint_t **head)
{
	listint_t *current_element;

	while (*head)
	{
		current_element = *head;
		*head = (*head)->next;
		free(current_element);
	}
	*head = NULL;
}
