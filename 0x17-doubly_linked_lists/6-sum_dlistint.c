#include "lists.h"

/**
  * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
  * @head: header of double linked list
  * Return: the sum of all nodes
  */
int sum_dlistint(dlistint_t *head)
{
    unsigned int sum;
    dlistint_t *tmp_node;

    tmp_node = head;

    if (tmp_node != NULL)
    {
        if (tmp_node->prev != NULL)
            tmp_node = tmp_node->prev;

        sum = 0;
        while (tmp_node != NULL)
        {
           sum += tmp_node->n;
           tmp_node = tmp_node->next;
        }
        return (sum);
    }
    else
        return (0);
}
