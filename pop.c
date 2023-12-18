#include "monty.h"

/**
* pop - this is a function that removes elements in a stack
* @stack: a pointer to the top of the stack
* @line_number: this is where the instruction is called
*/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (arguments.stack_length == 0)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;
	if (arguments.stack_length != 1)
	*stack = (*stack)->next;
	else
	*stack = NULL;
	free(temp);
	arguments.stack_length--;
}
