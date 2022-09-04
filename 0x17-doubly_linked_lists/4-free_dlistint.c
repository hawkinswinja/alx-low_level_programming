#include "lists.h"
/**
  * free_dlistint - free a list
  * @head: list
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
