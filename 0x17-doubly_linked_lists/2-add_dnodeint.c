#include "lists.h"
/**
  * add_dnodeint - adds node at the head of a list
  * @head: list to modify
  * @n: int n for new node
  * Return: new list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	return (*head);
}
