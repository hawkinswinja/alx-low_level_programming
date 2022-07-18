#include "lists.h"
/**
  * listint_len - length of list h
  * @h: list
  * Return: size of the list
  */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
