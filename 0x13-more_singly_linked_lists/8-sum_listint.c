#include "lists.h"
/**
  * sum_listint - sums data in a list
  * @head: list with data to sum
  * Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int n = 0;
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
