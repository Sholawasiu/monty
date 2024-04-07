#include "monty.h"

/**
 * execute - execute the opcode
 * @stack: linked list head - stack
 * @counte: line_number
 * @file: pointer to monty file
 * @content: line content
 * Return: no retun
 */

int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {{"push", f_push},
				{"pall", f_pall},
				{"pint", f_pint};
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"mod", f_mod},
				{"pstr", f_pstr},
				{"sub", f_sub},
				{"pchar", f_pchar},
				{"div", f_div},
				{"mul", f_mul},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, "\n\t");

	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, "\n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%D: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	return (1);
}
