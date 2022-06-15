#include "shell.h"

/**
 *get_builtin - checks for builtins returns a pointer to the function
 *@cmd: The builtin command to serch for
 *Return: A pointer to the function that handles this function
 */
int (*get_builtin(char *cmd))(data_shell * datash)
{
	register int i = 0;

	builtin_t my_builtins[] = {
		{"exit", exit_shell},
		{"env", _env},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
		{"help", get_help},
		{"cd", cd_shell},
		{NULL, NULL}
	};
	while (my_builtins[i].name && (_strcmp(my_builtins[i].name, cmd) != 0))
		i++;
	return (my_builtins[i].f);
}
