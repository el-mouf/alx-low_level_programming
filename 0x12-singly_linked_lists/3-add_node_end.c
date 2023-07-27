#include "lists.h"

/**
 * add_node_end - function adds a new node at
 * the end of a list
 * @head: a double pointer
 * @str: the string that will be added to list
 * Return: the address of the new element (success)
 * otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current_node;
	char *duplicate;
	unsigned int len;

	newNode = (list_t *)malloc(sizeof(list_t));
	if(!newNode)
	{
		return (NULL);
	}

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}

	newNode->str = duplicate;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = newNode;
	}
	return (newNode);
}
