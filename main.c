#include "monty.h"
bus_t bus {NULL, NULL, NULL, 0};

/**
 * main - monty bytecode interreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	size_t rea_line = 1;
	stack_t stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf()


