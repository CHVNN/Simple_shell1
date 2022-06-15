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
