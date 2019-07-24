#include "monty.h"

/**
 * get_op_func - searches instructions for opcode function
 * @str: opcode to search for
 *
 * Return: pointer to corresponding function
 */
void (*get_op_func(char *str))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{"pchar", op_pchar},
		{"pstr", op_pstr},
		{"rotl", op_rotl},
		{"rotr", op_rotr},
		{"stack", op_mstk},
		{"queue", op_mque},
		{"#", op_nop},
		{NULL, NULL}
	};
	int idx = 0;

	while (instructions[idx].opcode)
	{
		if (strcmp(instructions[idx].opcode, str) == 0)
			return (instructions[idx].f);
		idx++;
	}
	/* opcode error */
	return (opcode_error);
}
