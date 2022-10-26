#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked list
 * @head: first node in the list
 * Return: resultant sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
