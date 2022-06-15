#include "shell.h"

/**
 *_strdup - creates new allocated mem space with a copy of a str in it.
 *@str: A string
 *
 *Return: A pointer to the memspace of NULL if unsuccessful
 */
char *_strdup(const char *str)
{
	int i = 0;

	char *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(*new) * _strlen(str) + 1);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			new[i] = str[i];
			i++;
		}
	}
	return (new);
}

/**
 *_strlen - finds the length of a string using recursion
 *
 *@s: String being queried
 *Return: int
 */
int _strlen(const char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen((s + 1)));
}

/**
 *_strtok - Converts a string into tokens based on delimeter
 *@str: The queried string
 *@delim: a string of character to be useed as delimeters
 *Return: A pointer to the next token if present
 */
char *_strtok(char str[], const char *delim)
{
	return (strtok(str, delim));
}
