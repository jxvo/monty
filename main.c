#include "monty.h"

/**
 * main - intepreter for Monty ByteCode files
 * @argc: argument count
 * @argv: array of argument tokens
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *bytecode = "push 1\npush 2\npush 3";

	/* argv must consist of program name and file name only (2 tokens) */
	if (argc > 2 || argv[2] == NULL)
	{
		/* syntax error */
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	int node_val = argv[1];
}
