#include "lists.h"

/**
* dlistint_len - get the length of nodes in a double linked list
* @h: header of double linked list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;

    if (h == NULL)
        return (count);

    while (h->prev != NULL)
        h = h->prev;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    return(count);
}
