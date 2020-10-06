#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - funtion is like strchr C function.
 * @s: String
 * @c: Character to locate in the string.
 * Return: Pointer to firts coincidence or null on non match.
 */
char *_strchr(char *s, char c)
{
	int iter;
	char *str = '\0';

	for (iter = 0; s[iter]; iter++)
	{
		if (s[iter] == c)
		{
			break;
		}
	}
	if (s[iter] == c)
	{
		str = &s[iter];
		return (str);
	}
	return (0);
}
