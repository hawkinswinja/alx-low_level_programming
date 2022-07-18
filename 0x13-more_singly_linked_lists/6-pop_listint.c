#include "lists.h"
/**
  * pop_listint - delete head node
  * @head: current list
  * Return: the data of deleted node
  */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
