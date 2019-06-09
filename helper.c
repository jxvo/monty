#include "monty.h"

/**
 * _atoi - converts string of numbers to integer
 * @s: string to convert
 *
 * Return: string converted to integer
 */
int _atoi(char *s)
{
	int num = 0;
	unsigned char neg = 0;
	char *str;

	/* need to include error handling for strings with non numbers */

	for (str = s; *str && (*str < '0' || *str > '9'); str++)
		if (*str == '-')
			neg = !neg;
	for (; *str >= '0' && *str <= '9'; str++)
	{
		num *= 10;
		if (neg == 1)
			num -= *str - '0';
		else
			num += *str - '0';
	}
	return (num);
}

/**
 * tokenizer - split a string into opcode instruction tokens
 * @str: line extracted from Monty ByteCode file
 *
 * Return: double pointer to first token
 */
char **tokenizer(char *str)
{
	size_t idx = 0, io = 0;
	int tok = 1;
	char **tokens = NULL;
	char *buf = NULL, *token = NULL, *bufptr = NULL, *delim = " ";

	buf = strdup(str);
	if (buf == NULL)
	{
		/* malloc failure */
		return (NULL);
	}
	bufptr = buf;

	while (*bufptr)
	{
		if (strchr(delim, *bufptr) != NULL && io == 0)
		{
			tok++;
			io = 1;
		}
		else if (strchr(delim, *bufptr) == NULL && io == 1)
			io = 0;
		bufptr++;
	}
	tokens = malloc(sizeof(char *) * (tkn + 1));
	if (tokens == NULL)
	{
		/*malloc failure*/
		return (NULL);
	}
	token = strtok(buf, delim);
	while (token)
	{
		tokens[idx] = strdup(token);
	}
}
