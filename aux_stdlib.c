#include "shell.h"

/**
 *insertNullByte - inserts a null byte at specified index
 *@str: String of character
 *@index: Index of null byte
 *Return: void
 */
void insertNullByte(char *str, unsigned int index)
{
	str[index] = '\0';
}

/**
 *aux_itoa - Converts an integer toa string
 *
 *@n:input integer
 *Return: A pointer to the string of integer n
 */
char *aux_itoa(int n)
{
	int tmp = n, i, j = 0;
	char *str, digits[] = "0123456789";

	for (i = 1; tmp != 0; i++)
	{
		tmp /= 10;
	}
	str = malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (n != 0)
	{
		str[j] = digits[n % 10];
		n /= 10;
		j++;
	}
	str[j] = '\0';
	rev_string(str);
	return (str);
}
