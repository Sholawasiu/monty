#include <main.h>
#define SIZE 100


int push(int element)
{
	int stack[SIZE];
	int top = -1;
	int line_number = 4;
	if (top == -1 || top !== atoi(element))
	{
		fprintf(stdout, "L%d: usage: push integer\n", line_number );
		
		exit(EXIT_FAILURE);
	}
	else
	{
		top ++;
		top = stack[element];
	}
}	


int pall()
{
	int stack[];
	int top = -1;
	int i;

	for (i = top, i >= 0; i--)
	{
		printf("%d", stack[i]);
	}
}


