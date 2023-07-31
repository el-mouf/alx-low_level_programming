#include "lists.h"

/**
 * add_nodeint - function that adds a node
 * at the beginning of a list
 * @h: a pointer to the head of the linked
 * list
 * @n: value of the new node
 * Return: return the address of the new
 * element, otherwise NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
