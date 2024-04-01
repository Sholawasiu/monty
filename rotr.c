#include "monty.h"

/**
 * f_rotr - rotate the top of the stack to the bottom
 * @head: stack head
 * @count: line_number
 * Return: no return
 */

void f_rotr(stack_t **head, __attributr__((unused)) unsigned int count)
{
	stack_t *copy

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}


