#include "lists.h"
/**
  * free_list - free list_t
  * @head: head of list_t
  * Return: nothinh
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
