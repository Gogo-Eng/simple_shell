#include "shell.h"

/**
 * printg - prints lines of strings
 * @c: string to be printed
 */

void printg(char *c)
{
	write(1, c, _strlen(c));
}
