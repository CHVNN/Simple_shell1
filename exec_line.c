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
		perror("Error: Failed to fork\n");
		exit(1);
	}
	if (datash->args == NULL)
	{
		return (0);
	}
	if (!id)
	{
		if (execve(datash->args[0], datash->args, datash->_environ) == -1)
		{
			free(datash->input);
			free_data(datash);
			if (errno == ENOENT)
			{
				get_error(datash, 127);
				freeArgs(datash->args);
				exit(127);
			}
			if (errno == EACCES)
			{
				get_error(datash, 126);
				freeArgs(datash->args);
				exit(126);
			}
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
