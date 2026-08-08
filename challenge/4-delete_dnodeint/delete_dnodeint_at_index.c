#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Əgər silinəcək element başlanğıcdırsa (index 0) */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Lazımi indeksə qədər irəliləyirik */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* Əgər indeks siyahının uzunluğundan böyükdürsə */
	if (current == NULL)
		return (-1);

	/* Qonşu nodların göstəricilərini yeniləyirik */
	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}
