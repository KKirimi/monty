#include "monty.h"
/**
 * push - this push an integer onto the stack
 * @stack: a double pointer to the stack
 * @line_number: a line number where push is called
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg_str;
	int k;

	arg_str = strtok(NULL, " \n\t\r");
	if (arg_str == NULL || is_number(arg_str))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	k = atoi(arg_str);
	if (!allocate_node(stack, k))
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	arguments.stack_length++;
}
