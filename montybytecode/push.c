#include "montybytecode.h"

/**
  * push -  pushes an element to the stack.
  * @stack: head of the stack
  * @line_number: shows where the operation is being executed in the script
  * @arg: a string representing an integer to be pushed onto the stack
  * Return: no return
  */

void push(stack_t **stack, unsigned int line_number, char *arg)
{
	if (!arg || (arg[0] < '0' || arg[0] > '9'))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		 exit(EXIT_FAILURE);
	}

	int num = atoi(value);

	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		exit(EXIT_FAILURE);
	}
}
