#include "shell.h"

/**
 * _strchr - searches the first occurrence of a character
 * @str: null-terminated string
 * @c: specified character to search for
 * Return: the appropriate ointer
 */

char *_strchr(char *str, char c)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		if (str[t] == c)
		{
			return (str + t);

		}
	}

	if (str[t] == c)
	{
		return (str + t);
	}

	return (0);
}
