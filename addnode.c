#include "monty.h"

/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value to be added
 * Return: no return
 */

void addnode(stack_t **head, int n)
{
	stack_t *newnode, aux;

	aux = *head;
	newnode = malloc(sizeof(stack_t));

	if (newnode == null)
	{
		printf("Error\n");
		exit(0);
	}
	if (aux)
		aux->prev = newnode;
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
