#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Description: Frees each node in the list, starting from the head,
 * and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
    listint_t *temp;

    if (head == NULL)
        return;

    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
