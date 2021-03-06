#include "monty.h"

/**
 * op_rotl - swaps the values of the top and bottom elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being interpreted from Monty file
 *
 * Description: second element from top becomes the top element
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_rotl(stack_t **head, unsigned int line_number)
{
	stack_t *tail = *head;
	int temp_n = 0;

	if (!line_number || !head || !*head || !(*head)->next)
		return;

	temp_n = tail->n;
	while(tail->next)
	{
		tail = tail->next;
		tail->prev->n = tail->n;
	}
	tail->n = temp_n;
}
