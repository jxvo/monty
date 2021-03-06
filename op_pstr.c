#include "monty.h"

/**
 * op_str - prints all character values on the stack, starting from the top
 * @stack: double pointer to head node
 * @line_number: line number where opcode was encountered
 *
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (!line_number)
		return;

	if (!stack || !stack)
	{
		putchar('\n');
		return;
	}

	node = *stack;

	while (node && (node->n > 0 && node->n < 128))
	{
		putchar(node->n);
		node = node->next;
	}
	putchar('\n');
}
