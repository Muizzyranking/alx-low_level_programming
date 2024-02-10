#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the node at index or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (i < index && current)
	{
		current = current->next;
		i++;
	}
	return (current);
}
