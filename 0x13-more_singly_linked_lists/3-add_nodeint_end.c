#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a list
 * @head: a double pointer to the head of a
 * linked list
 * @n:value of the node
 * Return: returns the address of the new
 * element, otherwise NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current;

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
