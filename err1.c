#include "monty.h"

/**
 * pint_error - op_pint error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void pint_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - op_pop error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void pop_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - op_swap error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void swap_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
