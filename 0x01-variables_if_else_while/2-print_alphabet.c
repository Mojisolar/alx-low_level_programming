#include <stdio.h>
/**
 * main - prints the alphabetic
 * Return: Always (sucess)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
