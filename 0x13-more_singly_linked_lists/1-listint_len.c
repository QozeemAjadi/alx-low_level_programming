#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint-t list.
 * @h: Pointer to the head of the lists.
 *
 * Return: The number of elements in the lists.
 */
 size_t listint_len(const listint_t *h)
 {
         size_t count = 0;

         while (h != NULL)
          {
                  count++;
                  h = h->next;
          }

          return (count);
 }
