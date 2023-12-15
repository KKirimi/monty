#include "monty.h"
/**
 * push - push an integer onto the stack
 * @stack: double pointer to he stack
 * @line_number: ine number where push is called
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
char *arg_str;
int n;

arg_str = strtok(NULL, " \n\t\r");
if (arg_str == NULL || is_number(arg_str))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
n = atoi(arg_str);
if (!allocate_node(stack, n))
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
arguments.stack_length++;
}
