#include "monty.h"
/**
* pint - this prints the value at the top of the stack, followed by a new line
* @stack: a pointer to stack
* @line_number: a line number where the instruction is called
*/

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
