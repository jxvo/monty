#include "monty.h"

/**
 * free_stack - frees all elements of a stack
 *
 * Return: nothing
 */
void free_stack(stack_t **stack)
{
	stack_t *node;
	if (!stack || !*stack)
		return;
	while (*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
}
