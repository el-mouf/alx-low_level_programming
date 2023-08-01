#include "lists.h"

/**
 * get_nodeint_at_index - function that nth node
 * of a linked list
 * @index: the index of the node
 * @head: pointer to the head of a linked list
 * Return: returns NULL if node does not exit
 * otherwise nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0;

	while (head)
	{
		if (node_index == index)
		{
			return (head);
		}

		head = head->next;
		node_index++;
	}
	return (NULL);
}
