#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int d;
	char low;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}

	for (low = 'a'; low < 'g'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
