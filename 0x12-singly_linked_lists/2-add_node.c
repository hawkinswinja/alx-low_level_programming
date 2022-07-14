#include "lists.h"
/**
  * add_node - add node to the head
  * @head: double pointer to the first node
  * @str: string to duplicate
  * Return: address of thee head
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(temp->str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
