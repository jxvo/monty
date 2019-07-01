#include "monty.h"

/**
 * op_push - pushes a value to the top of the stack
 * @head: double pointer to head node
 * @line_number: line number where opcode was encountered
 *
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node;
	size_t idx = 0;

	if (!head || !line_number)
		exit(EXIT_FAILURE);
	if (stack_val.n[idx] == '\0')
		push_error(head, line_number);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		malloc_error(head);
	new_node->prev = NULL;
	for (; stack_val.n[idx] != '\0'; idx++)
	{
		if (isdigit(stack_val.n[idx]) == 0 && stack_val.n[idx] != '-')
			push_error(head, line_number);
	}
	new_node->n = atoi(stack_val.n);
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
}
