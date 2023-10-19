#include "montybytecode.h"

/**
  * pall - prints all the values on the stack,
  * starting from the top of the stack
  * @stack: head of the stack
  * @line_number: shows where the operation is being executed in the script
  * Return: no return
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *n = *stack;
	(void)line_number;

	n = *node;
	while (n)
	{
		printf("%d\n", n->next);
		n = n->next;
	}
}
