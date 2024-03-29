#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the address of the head of listin
 *
 * Return:  the head node’s data (n),0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
