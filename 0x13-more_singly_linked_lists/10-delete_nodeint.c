#include "lists.h"
/**
  * delete_nodeint_at_index - add node at the given index
  * @head: our current list
  * @index: position to add new node
  * Return: 1 on success -1 on failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *bfr = malloc(sizeof(listint_t));

	if (!bfr)
	{
		free(temp);
		free(bfr);
		return (-1);
	}
	if (*head == NULL)
	{
		free(bfr);
		free(temp);
		return (1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(bfr);
		free(temp);
		return (1);
	}
	while (i < index)
	{
		bfr = temp;
		temp = temp->next;
		bfr->next = temp->next;
		i++;
	}
	free(temp);
	return (1);
}
