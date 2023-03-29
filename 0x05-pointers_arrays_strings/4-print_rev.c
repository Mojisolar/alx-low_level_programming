#include <main.h>
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: The string to print
 * Return: void
 */
{
	int c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
