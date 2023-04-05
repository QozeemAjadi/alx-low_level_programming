#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: indicate a pointer to the head of the list.
 * @n: value is to be inside the new node.
 *
 * Return: Address of the stored in new node.
 */
 listint_t *add_nodeint_end(listint_t **head, const int n)
  {
	  listint_t *new_node, *temp; 

	  /*Allocate memory for the new node*/
	  new_node = malloc(sizeof(listint_t));
	  if (new_node == NULL)
		  return (NULL);

	  /*start new code*/
	  new_node->n = n;
	  new_node->next = NULL;
          
	  /*if list is vacant, set head to point to new node*/
	  if (*head == NULL) 
          {
		  *head = new_node;
		  return (new_node);
	   }

	   /*Traverse to end of the list*/
	  temp = *head;
	  while (temp->next != NULL)
		  temp = temp->next;

	 /*set the last node's to the next point to indicate a new node*/
	  temp->next = new_node;

	  return (new_node);
   }	  
