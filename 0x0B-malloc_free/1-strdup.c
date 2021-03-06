#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a space in memory, which contains copy of str
 * @str: String to duplicate
 * Return: Pointer to the new string.
 */

char *_strdup(char *str)
{
	int iter;
	char *new_str;

	if (str == NULL)
		return ('\0');

	new_str = malloc(sizeof(char) * _strlen(str) + 1);
	if (!new_str)
		return ('\0');
	for (iter = 0; str[iter]; iter++)
	{
		*(new_str + iter) = *(str + iter);
	}
	new_str[iter + 1] = '\0';
	return (new_str);
}

/**
 * _strlen - Return the lenght of a string.
 * @str: String to count.
 * Return: Number of characters in str..
 */

int _strlen(char *str)
{
	int iter = 0;

	while (str[iter])
		iter++;
	return (iter);
}
