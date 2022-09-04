#include "lists.h"
/**
  * add_dnodeint_end - add node at the end of list
  * @head: list to modify
  * @n: new node number
  * Return: edited list with new node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!*head)
	{
		*head = node;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	node->prev = temp;
	temp->next = node;
	return (*head);
}
