#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head
 * @index: index
 * Return: 1 if successful, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;
	
	if (head == NULL)
		return (-1);

	if (index == 0)
        {
		*head = tmp->next;
                if (*head != NULL)
                        (*head)->prev = NULL;
		free(tmp);
		return (1);
        }

	for (i = 0; i < index; ++i)
	{
		if (tmp == NULL)
        	return -1;
	tmp = tmp->next;
	}

	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return 1;
	}

	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return 1;

	/* while (index > 0)
	// {
	// 	tmp = tmp->next;
	// 	if (tmp == NULL)
	// 		return (-1);
	// 	index--;
	// }
	//
	// tmp->prev->next = tmp->next;
	// if (tmp->next != NULL)
	// 	tmp->next->prev = tmp->prev;
	// free(tmp);
	// return (1); */

}
