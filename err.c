#include "monty.h"

/**
 * file_error - raised when file can't be opened
 *
 * Return: nothing
 */
void file_error(void)
{
	fprintf(stderr, "Error: Can't open file %s\n", stack_val.file);
	exit(EXIT_FAILURE);
}

/**
 * usage_error - raised when user inputs wrong syntax
 *
 * Return: nothing
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - malloc error handling program
 * @stack: double pointer to head node
 *
 * Return: nothing
 */
void malloc_error(stack_t **stack)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * opcode_error - invalid instruction error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void opcode_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number,
		stack_val.opcode);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * push_error - op_push syntax error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void push_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

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
