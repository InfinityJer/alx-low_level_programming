#include "lists.h"

/**
  * free_dlistint - free a double linked list
  * @head: header of double linked list
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
    if (head != NULL)
    {
        dlistint_t *save_node;

        while (head->prev != NULL)
            head = head->prev;

        while (head != NULL)
        {
            save_node = head->next;
            free(head);
            head = save_node;
        }
    }
}
