#include "shell.h"

/**
 *get_help - finds the help page for function
 *
 *@datash:Data structure containing input information
 *Return: 0 if succesful
 */
int get_help(data_shell *datash)
{
	char *str = "Pending implementation";

	(void)datash;
	write(STDOUT_FILENO, str, _strlen(str));
	return (1);
}
