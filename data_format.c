#include "monty.h"

/**
 * fifo - sets the format of the data to a queue (FIFO)
 * @stack: pointer to he stack
 * @line_number: line number where the instruction is called
 *
 * Return: void
 */
void fifo(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	arguments.linear_data = QUEUE;
}


/**
 * lifo  - sets the format of the data to a stack (LIFO)
 * @stack: pointer to the stack
 * @line_number: line number where the instruction is called
 *
 * Return: void
 */
void lifo(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	arguments.linear_data = STACK;
}
