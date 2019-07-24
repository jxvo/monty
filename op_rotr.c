#include "monty.h"

/**
 * op_rotr - swaps the values of the top and bottom elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being interpreted from Monty file
 *
 * Description: second element from bottom becomes the new bottom
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_rotr(stack_t **head, unsigned int line_number)
{
	stack_t *tail = *head;
	int temp_n;

	if (!line_number || !head || !*head || !(*head)->next)
		return;

	while(tail->next)
		tail = tail->next;
	temp_n = tail->n;
	while (tail->prev)
	{
		tail = tail->prev;
		tail->next->n = tail->n;
	}
	tail->n = temp_n;
}
