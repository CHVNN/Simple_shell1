#include "shell.h"

/**
 *cd_shell - Changes the directory of the shell
 *
 *@datash: Structure containing input information
 *Return: 1 if successful
 */
int cd_shell(data_shell *datash)
{
	char *str = "Work in progress";

	(void)datash;
	write(STDOUT_FILENO, str, _strlen(str));
	return (1);
}
