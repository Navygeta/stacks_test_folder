#include"montybytecode.c"

/**
  * pint - prints the value at the top of the stack
  * @stack: head of the stack
  * @line_number: shows where the operation is being executed in the script
  * Return: no return
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number)
			exit(EXIT_FAILURE);
	}
	 printf("%d\n", (*stack)->n);
}
