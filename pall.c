#include "monty.h"

/**
 * pall - this prints all the values in stack from the top
 * @stack: a pointer to top of the stack
 * @line_number: a line number where instruction is called
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)(line_number);

	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		if (current == *stack)
		{
			return;
		}
	}
}
