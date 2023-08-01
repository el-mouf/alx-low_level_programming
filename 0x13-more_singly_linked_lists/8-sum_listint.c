#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data of a linked list
 * @head: a pointer to the head of a linked
 * list
 * Return: return 0 if the list is empty
 * otherwise the sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
