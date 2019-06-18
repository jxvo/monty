#include "monty.h"

/**
 * file_error - raised when file can't be opened
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void file_error(stack_t **stack, unsigned int line_number)
{
	fprintf(STDERR_FILENO, "Error: Can't open file %s\n", stack_val.file);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * usage_error - raised when user inputs wrong syntax
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void usage_error(unsigned int line_number)
{
}

/**
 * memory_error - malloc error handling program
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void memory_error(unsigned int line_number)
{

}

/**
 * push_error - op_push syntax error handling program
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void push_error(unsigned int line_number)
{
}
