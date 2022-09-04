#include "lists.h"
/**
  * delete_dnodeint_at_index - delete node at the given index
  * @head: the list to edit
  * @index: position of node to delete
  * Return: 1 on success -1 on failure
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp = *head;

	if (index == 0 && (*head)->next)
	{
		*head = (*head)->next;
		return (1);
	}
	else if (index == 0 && !(*head)->next)
	{
		*head = NULL;
		return (1);
	}
	while (temp->next)
	{
		if (n == index)
		{
			temp->prev->next = temp->next;
			return (1);
		}
		temp = temp->next;
		n++;
	}
	return (-1);
}
