#include "montybytecode.h"

 /**
  * add - adds the top two elements of the stack and returns the result.
  * @stack: head of the stack
  * @line_number: shows where the operation is being executed in the script
  * Return: no return
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *top = *stack;
	stack_t *second = top->next;

	top->next = second->next;
	if (second->next)
	{
		second->next->prev = top;
	}

	top->n += second->n;

	free(second);
}
