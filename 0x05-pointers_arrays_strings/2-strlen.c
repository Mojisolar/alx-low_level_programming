#include <stdio.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @str: The string to get the length of
 * Return: The length of @str.
 */
size_t _strlen(char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
