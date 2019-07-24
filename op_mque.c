#include "monty.h"

/**
 * op_mque - changes data organization mode to Queue (FIFO)
 * @stack: double pointer to head node (unused)
 * @line_number: line being interpreted from Monty file (unused)
 *
 * Return: nada
 */
void op_mque(stack_t **stack, unsigned int line_number)
{
        (void)stack;
        (void)line_number;
	stack_val.q = 1;
}
