#include "monty.h"

/**
 * f_pint - print the top value of the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
 */

void f_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%D: can't pint stack is empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stak(*head);
		exit(EXIT_FAILURE):
	}
	printf("%d", (*head)->n);
}

