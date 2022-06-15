#include "shell.h"

/**
 *shell_loop - the most integral part of the shell program controls the running
 *
 *@datash: The basic parameters of the shell entry
 *Return: void
 */
void shell_loop(data_shell *datash)
{
	int (*f)(data_shell *datash);

	while (1)
	{
		get_line(datash);
		datash->args = split_line(datash->input);
		if (!datash->args)
			continue;
		f = get_builtin(datash->args[0]);
		if (f)
		{
			f(datash);
			free(datash->input);
			continue;
		}
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
	write(STDOUT_FILENO, "$ ", 2);
}
