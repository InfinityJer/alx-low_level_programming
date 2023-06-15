#include "lists.h"
/**
  * add_dnodeint - add a node at the begining of a double linked list
  * @head: header of double linked list
  * @n: number to set in a new node
  * Return: address of a new element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof (dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        new_node->next = NULL;
        *head = new_node;
    }
    else
    {
        while((*head)->prev != NULL)
            (*head) = (*head)->prev;

        (*head)->prev = new_node;
        new_node->next = *head;
        new_node->prev = NULL;
        *head = new_node;
    }
    return(*head);
}
