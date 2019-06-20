#include "monty.h"

/**
 * main - intepreter for Monty ByteCode files
 * @argc: argument count
 * @argv: array of argument tokens
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	FILE *file_ptr;
	char *line_buf = NULL, op_buf[16];
	ssize_t bytes_read = 0;
	size_t buf_size = 0;
	unsigned int line_number = 0;
	int op_val = 0, tokens = 0;
	stack_t *stack = NULL;

	if (argc != 2 || !argv[1])
		usage_error();
	/* open requested Monty ByteCode file */
	stack_val.file = argv[1];
	file_ptr = fopen(stack_val.file, "r");
	if (!file_ptr)
		/* file open error */
		file_error();
	/* read each line, store values into buffer and execute op-function */
	while ((bytes_read = getline(&line_buf, &buf_size, file_ptr)) != -1)
	{
		line_number++;
		tokens = sscanf(line_buf, "%s %d", op_buf, &op_val);
		if (tokens > 2)
		{
			/* usage error */
			free(line_buf);
			usage_error();
		}
		/* line buffer has done it's job, nice work buddy */
		free(line_buf);
		line_buf = NULL;
		stack_val.opcode = op_buf;
		stack_val.n = op_val;
		op_val = 0;
		if (tokens > 0)
			get_op_func(stack_val.opcode)(&stack, line_number);
	}
	free(line_buf);
	free_stack(&stack);
	fclose(file_ptr);
	return (0);
}
