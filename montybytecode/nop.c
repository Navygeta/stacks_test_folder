#include "montybytecode.h"

/**
  *nop- doesnt do anything
  *@stack: head of the stack
  *@line_number: shows where the operation is being executed in the script
  *Return: no return
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
