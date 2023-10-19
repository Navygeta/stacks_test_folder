#include "montybytecode.h"

/**
 * pop - removes the top element of the stack
 * @stack: head of the stack
 * @line_number: shows where the operation is being executed in the script
 * Return - no return
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack = temp->next;

	if (*stack)
	{
		(*stack)->prev = NULL;
	}

	free(temp);
}
