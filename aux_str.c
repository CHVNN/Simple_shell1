#include "shell.h"

/**
 *_strcpy - copies one string to another
 *
 *@dest: The destination string
 *@src: The source string
 *Return: The destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *_strcat - concatenates two strings
 *
 *@dest: destination string
 *@src: source of the string
 *Return: An array of charachters concatenating dest and src
 */
char *_strcat(char *dest, const char *src)
{
	int len_src, len_dest, i;

	len_src = _strlen(src);
	len_dest = _strlen(dest);
	for (i = 0 ; i <= len_src ; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}

/**
 *_strchr - checks for the first occurence of char c
 *@s: String queried
 *@c: Character to be searched for
 *Return: Pointer to first occurence of char found
 */
char *_strchr(char *s, char c)
{
	int i;

	char *x;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			x = (s + i);
			return (x);
		}
	}
	if (s[i] == c)
	{
		x = (s + i);
		return (x);
	}
	return (0);
}

/**
 *_strcmp - Compares two strings
 *
 *@s1: Frist string
 *@s2: Second string
 *Return: -15 if s1 is less 0 if the same , and 15 if greater
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
