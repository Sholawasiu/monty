#include "monty.h"

/**
 * f_queue - prints the top
 * @head: the stack head
 * @count: line_number
 * Return: o\no return
 */

void f_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail of the stack
 * @n: new_value
 * @head: stack head
 * Return: no return
 */

void addqueue(stack_t **heaad, int n)
{
	stack_t *newnode, *aux;

	aux = *head;
	newnode = (stack_t*)malloc(sixeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode-> = n;
	newnode->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if(!aux)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		aux->next = newnode;
		newnode->prev = aux;
	}
}

