#include "lists.h"
/**
  * add_node_end - add node to the end of list
  * @head: double pointer to the first node
  * @str: string to duplicate
  * Return: address of the new head
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *node = malloc(sizeof(list_t));

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (!temp)
		return (NULL);
	if (*head == NULL)
		*head = node;
	else
		temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
		return (*head);
}
