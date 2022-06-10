#include "shell.h"

/**
 *shell_loop - the most integral part of the shell program controls the running
 *
 *@datash: The basic parameteers of the shell entery
 *Return: void
 */
void shell_loop(data_shell *datash)
{
	while (1)
	{
		get_line(datash);
		datash->args = split_line(datash->input);
		exec_line(datash);
	}
}

/**
 *type_prompt - Prints the prompt for the shell
 *
 *Return: void
 */
void type_prompt(void)
{
	printf("$ ");
}
