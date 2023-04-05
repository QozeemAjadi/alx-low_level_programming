#include "lists.h"

/**
 * free_listint - free a listint_t linked list
 * @head: indicate the head of the node of the list
 **/
 void free_listint(listint_t *head)
 {
	 listint_t *current;

	 while (head)
         {
		 current = head;
		 head = head->next;
		 free(current);
          }
  } 
