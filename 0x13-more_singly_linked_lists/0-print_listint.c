#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t lists.
 * @h: A pointer to the head of the list_t lists.
 *
 * Return: the number of nodes on the list_t lists.
 */
 size_t print_listint(const listint_t *h)
 {
	 size_t n = 0;

	 while (h != NULL)
	 {
	           printf("%d\n", h->n);
	           n++;
	           h = h->next;
	 }
         return (n);
 }	 
