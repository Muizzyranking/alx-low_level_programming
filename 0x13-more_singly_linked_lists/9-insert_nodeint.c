#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the pointer of the first node
 * @idx: Index of the list where the new node should be added
 * @n: Value to be added to the new node
 *
 * Return: Address of the new node or NULL if it failed
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx)
	{
		temp = *head;

		for (i = 0; i < idx - 1 && temp; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
