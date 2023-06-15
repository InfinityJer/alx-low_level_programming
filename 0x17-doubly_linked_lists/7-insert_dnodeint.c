#include "lists.h"

/**
  * insert_dnodeint_at_index -  inserts a new node at a given position
  * @h: header of double linked list
  * @idx: index of the node, starting from 0
  * @n: is a given number
  * Return: a address of nth node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *tmp_node, *new_node;

    if (idx == 0)
        add_dnodeint(h, n);
    else
    {
        tmp_node = *h;
        i = 1;

        if (tmp_node != NULL)
        {
            while (tmp_node->prev != NULL)
                tmp_node = tmp_node->prev;
        }

        while (tmp_node != NULL)
        {
            if (i == idx)
            {
                if (tmp_node->next == NULL)
                    add_dnodeint_end(h, n);
                else
                {
                    new_node = malloc(sizeof(dlistint_t));
                    if (new_node != NULL)
                    {
                        new_node->n = n;
                        new_node->next = tmp_node->next;
                        new_node->prev = tmp_node;
                        tmp_node->next->prev = new_node;
                        tmp_node->next = new_node;
                    }
                }
                break;
            }
            tmp_node = tmp_node->next;
            i++;
        }
    }
    return (new_node);
}
