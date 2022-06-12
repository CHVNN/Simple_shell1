#include "shell.h"

/**
 *rev_string - Reverses strings
 *
 *@s: string being reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int len, i;

	char p;

	len = _strlen(s) - 1;
	for (i = 0 ; i <= (len / 2) ; i++)
	{
		p = *(s + i);
		s[i] = s[(len - i)];
		s[(len - i)] = p;
	}
}
