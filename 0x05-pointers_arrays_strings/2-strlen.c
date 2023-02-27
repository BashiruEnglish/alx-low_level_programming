#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string we want the length of
 * Return: the length of our string @str.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}

