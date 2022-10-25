#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: a pointer to the address of the head of listint_t list
 *
 * Description: set the head to NULL
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
