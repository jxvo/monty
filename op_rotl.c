#include "monty.h"

/**
 * op_rotl - swaps the values of the top and bottom elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being interpreted from Monty file
 *
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_rotl(stack_t **head, unsigned int line_number)
{
	stack_t *tail = *head;
	int temp_n = 0;

	if (!line_number)
		return;

	temp_n = tail->n;
	while(tail->next)
	{
		tail = tail->next;
		tail->prev->n = tail->n;
	}
	tail->n = temp_n;
}
