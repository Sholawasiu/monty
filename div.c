#include "monty.h"

/**
 * f_div- divides the top two elements of the stack
 * @head: stack head
 * @count: line number
 * Return: return nothing
 */

void f_div(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0; aux;

	h = *head;
	while(h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't divide stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprinf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next-> / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
