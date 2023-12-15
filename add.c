#include "monty.h"

/**
* add - adds element to a stack
* @stack: pointer to start of the stack
* @line_number: number where the instruction is called
*/

void add(stack_t **stack, unsigned int line_number)
{
int i = 0;

if (arguments.stack_length < 2)
{
fprintf(stderr, "L%u: can't add, stack too short\n",
line_number);
exit(EXIT_FAILURE);
}
i += (*stack)->n;
pop(stack, line_number);
(*stack)->n += i;
}
