#include "monty.h"

/**
 * div_error - op_div stack error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void div_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * zero_error - op_div zero division error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void zero_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * mul_error - op_mul error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void mul_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * mod_error - op_mod error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void mod_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * pchar_error - op_pchar stack error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void pchar_error(stack_t **stack, unsigned int line_number)
{
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        free_stack(stack);
        exit(EXIT_FAILURE);
}

/**
 * char_error - op_pchar character error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void char_error(stack_t **stack, unsigned int line_number)
{
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        free_stack(stack);
        exit(EXIT_FAILURE);
}
