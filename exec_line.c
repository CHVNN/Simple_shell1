#include "shell.h"

/**
 *exec_line - executes a command
 *@datash: The sytuct containing data required for execution
 *Return: int
 */
int exec_line(data_shell *datash)
{
	int id = fork();
	int status;

	if (id == -1)
	{
		dprintf(STDERR_FILENO, "Error");
		exit(1);
	}
	if (datash->args == NULL)
	{
		return (0);
	}
	if (!id)
	{
		if (execve(datash->args[0], datash->args, NULL) == -1)
		{
			dprintf(STDERR_FILENO,
				"%s: No such file or directory found\n",
				datash->av[0]);
			exit(1);
		}
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			datash->status = WEXITSTATUS(status);
		free(datash->input);
		freeArgs(datash->args);
	}
	return (1);
}
