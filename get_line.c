#include "shell.h"

/**
 *get_line - Gets the command line entered by the user
 *@datash: Struct containing shell information
 *Return: thenumber of bytes read is returned
 */
ssize_t get_line(data_shell *datash)
{
	ssize_t len;
	char *ptr_n, *ptr_t;
	size_t bufferSize = 0;

	datash->args = NULL;
	datash->counter++;
	if (isatty(STDIN_FILENO))
		type_prompt();
	len = getline(&datash->input, &bufferSize, stdin);
	if (len == EOF)
	{
		free_mem(datash);
		exit(0);
	}
	ptr_n = _strchr(datash->input, '\n');
	ptr_t = _strchr(datash->input, '\t');
	if (ptr_n || ptr_t)
		insertNullByte(datash->input, len - 1);
	return (len);
}
