#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a linked list
 * @head: a double pointer to the head of the list
 * Return: returns 0 if the list is empty
 * otherwise the node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current_head;
	int data;

	if (!*head)
	{
		return (0);
	}

	current_head = *head;
	*head = (*head)->next;
	data = current_head->n;
	free(current_head);

	return (data);
}
