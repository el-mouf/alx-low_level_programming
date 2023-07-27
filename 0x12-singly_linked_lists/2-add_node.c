#include "lists.h"

/**
 * add_node - function that adds a node
 * at the beginning of a list
 * @head: a pointer
 * @str: a string that will be added
 * Return: the address of the new element (success)
 * otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *duplicate;
	int len;

	if (!str)
	{
		return (NULL);
	}

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
	{
		return (NULL);
	}

	duplicate = strdup(str);
	if (!duplicate)
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
