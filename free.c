#include "shell.h"

/**
 *freeArgs - Frees the members of a 2-dimensional list
 *@list: An array pointers
 *Return: void
 */
void freeArgs(char **list)
{
	register int i = 0;

	while (list[i])
		free(list[i++]);
	free(list);
}

/**
 *free_mem - Frees the memory from the data structure used by program
 *@datash: Data structure
 *Return: void
 */
void free_mem(data_shell *datash)
{
	if (datash->input)
		free(datash->input);
	if (datash->av)
		freeArgs(datash->av);
	if (datash->args)
		freeArgs(datash->args);
	if (datash->_environ)
		freeArgs(datash->_environ);
	if (datash->pid)
		free(datash->pid);
	if (datash)
		free(datash);
}
