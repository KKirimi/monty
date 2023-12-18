#include "monty.h"

/**
* add - this adds an element to a stack
* @stack: a pointer to start of the stack
* @line_number: number where the instruction is called
*/

void add(stack_t **stack, unsigned int line_number)
{
	int k = 0;

	if (arguments.stack_length < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
		line_number);
		exit(EXIT_FAILURE);
	}
	k += (*stack)->n;
	pop(stack, line_number);
	(*stack)->n += k;
}
