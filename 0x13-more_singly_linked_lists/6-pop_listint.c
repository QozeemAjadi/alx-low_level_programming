#include "lists.h"

/**
 * pop_listint(listint_t **head)
 * @head: double pointer to the head node of the linked list
 *
 * Return: the head node's data (n), or 0 if the linked list is vacant
 */
 int pop_listint(listint_t **head)
 {
	 int data;
	 listint_t *tmp;

	 if (*head == NULL)
		  return (0);

	 tmp = *head;
	 data = tmp->n;
	 *head = (*head)->next;
	 free(tmp);

	 return (data);
 }	 
