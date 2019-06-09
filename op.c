#include "monty.h"

/**
 * push - pushes an element to the top of the stack
 * @stack: double pointer to head node
 * @line_number: line number where opcode was encountered
 *
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (head == NULL)
		exit(EXIT_FAILURE);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new_node->n = node_val;
	printf("%d", new_node->n);
}
