#include "lists.h"

/**
  * add_dnodeint_end - add a node at the end of a double linked list
  * @head: header of double linked list
  * @n: number to set in a new node
  * Return: address of a new element
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *tmp_node;

    if (head == NULL)
        return (NULL);

    tmp_node = *head;

    new_node = malloc(sizeof(dlistint_t));

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
        while (tmp_node->next != NULL)
            tmp_node = tmp_node->next;

        new_node->next = NULL;
        new_node->prev = tmp_node;
        tmp_node->next = new_node;
        tmp_node = new_node;
    }
    return (tmp_node);
}
