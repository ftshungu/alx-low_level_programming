#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list, returns the nodes data
 * @head: head node of the linked list
 * Return: returns node n or 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
