#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to the first element in the listint_t
 * Return: if the list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);
}
