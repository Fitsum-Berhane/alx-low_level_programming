#include "lists.h"
#include <stddef.h> /* for NULL */
#include <unistd.h> /* for write */

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		char c = h->n + '0';

		write(STDOUT_FILENO, &c, 1);
		write(STDOUT_FILENO, "\n", 1);
		h = h->next;
		count++;
	}
	return (count);
}
