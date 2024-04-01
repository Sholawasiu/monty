#include "monty.h"

/**
 * f_sub - subtractions
 * @head: stack head
 * @count: line_number
 * Return: no return
 */

void (stack_t **head, unsigned int count)
{
	stack_t aux;
	int sub, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't subtract stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free-stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);
}

