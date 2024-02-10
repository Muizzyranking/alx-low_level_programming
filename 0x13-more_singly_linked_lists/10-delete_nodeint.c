#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer to the head of a listint_t linked list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	prev = temp->next->next;
	free(temp->next);
	temp->next = prev;
	return (1);
}
