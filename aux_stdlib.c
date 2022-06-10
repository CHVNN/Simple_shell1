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
