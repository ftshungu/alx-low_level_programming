#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: head node of the linked list
 * Return: sum of linked lists or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
