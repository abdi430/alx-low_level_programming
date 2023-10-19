/*
 * File: 0-print_list.c
 * Auth: Abdi
 */

#include "lists.h"
#include <stdio.h>
#include "_putchar.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		_putchar(h->n);
		h = h->next;
	}

	return (nodes);
}