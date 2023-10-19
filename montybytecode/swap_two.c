#include "montybytecode"

/**
  * swap - swap the values of the first two elements in the linked list
  * @stack: head of the stack
  * @line_number: shows where the operation is being executed in the script
  * Return: no return
  */

void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf("L<line_number>: can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}

	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
