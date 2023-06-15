#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *tmp_node;

    tmp_node = head;

    if (tmp_node != NULL)
    {
        while (tmp_node->prev != NULL)
            tmp_node = tmp_node->prev;

        i = 0;
        while (tmp_node != NULL)
        {
            if (i == index)
                break;
            tmp_node = tmp_node->next;
            i++;
        }
    }
    return (tmp_node);
}
