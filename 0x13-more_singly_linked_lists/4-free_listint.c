#include "lists.h"
/**
 * free_listint - frees a list
 * @head: the head of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
