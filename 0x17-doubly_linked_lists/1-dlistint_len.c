#include "lists.h"
/**
  * dlistint_len - list length
  * @h: list to count nodes
  * Return: size of list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
