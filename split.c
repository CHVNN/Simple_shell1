#include "shell.h"


/**
 *split_line - splits the command line entered by the user into an array
 *@input: String inputed by the user
 *Return: An array of pointers to each string
 */
char **split_line(char *input)
{
	unsigned int i = 0;
	char **tokens;
	char *tok;

	if (word_count(input) == 0)
	{
		return (NULL);
	}
	tokens = malloc((word_count(input) + 1) * sizeof(char *));
	tok = strtok(input, " ");
	while (tok != NULL)
	{
		tokens[i] = _strdup(tok);
		tok = strtok(NULL, " ");
		i++;
	}
	tokens[i] = tok;
	return (tokens);
}

/**
 *word_count - Counts the number of wordsin the command line
 *
 *@input: The string to be counted
 *Return: The number of words int the string, or -1 if failed
 */
unsigned int word_count(char *input)
{
	unsigned int count = 0, isWord = 0;
	int i = 0;

	while (input[i])
	{
		if (input[i] != ' ')
			isWord = 1;
		else
		{
			if (isWord)
				count++;
			isWord = 0;
		}
		i++;
	}
	count = isWord ? count + 1 : count;
	return  (count);
}
