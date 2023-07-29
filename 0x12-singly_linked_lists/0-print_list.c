#include <stdio.h>
#include "lists.h"

/**
 * print_list = prints all the elements of a linked list
 *
 *@: pointer to the list_t list to print.
 *
 *@h: pointer to the head of the list
 *
 * Return: the numbers of nodes printed.
*/

size_t  print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		s++;
	}
	return (0);
}
