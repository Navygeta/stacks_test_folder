#include "montybytecode.h"

/**
 * sub - subtracts the top element of the stack
 * from the second top element of the stack.
 * @stack: head of the stack
 * @line_number: shows where the operation is being executed in the script
 * Return - no return
 */

void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u, can't sub, stack too short\n", line_number);
			exit(EXIT_FAILURE);
	}

	int second_top = (*stack)->n;
	int top = (*stack)->next->n;

	(*stack)->next->n = top - second_top;

	stack_t *temp = *stack;
	*stack = temp->next;

	free(temp)
}
