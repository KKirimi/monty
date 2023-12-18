#include "monty.h"

/**
 * is_number - checks if a string only reps ints
 * @str: string to check
 *
 * Return: 0 if only digits, else 1
 */
int is_number(char *str)
{
int i;

for (i = 0; str[i]; i++)
{
if (str[i] == '-' && i == 0)
continue;
if (isdigit(str[i]) == 0)
return (1);
}
return (0);
}
