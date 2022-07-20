#include "lists.h"
/**
  * reverse_listint - reverse contents of list
  * @head: our current list
  * Return: pointer to reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous = NULL;

	if (*head == NULL)
		return (*head);
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	(*head)->next = previous;
	return (*head);
}
