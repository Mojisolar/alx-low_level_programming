#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all possible different combinations of two digits.
 * Return: Always (success)
 *
 */
int main(void)
{
	int d, e, f;

	d = 0;
	while (d < 100)

	{
		e = d % 10; /* singles digit */
		f = d / 10; /* doubles digit */

		if (e < f)
		{
			putchar(e + '0');
			putchar(f + '0');


			if (d < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		d++;
	}
	putchar('\n');
	return (0);
}
