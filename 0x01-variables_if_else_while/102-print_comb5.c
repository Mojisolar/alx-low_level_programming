#include <stdio.h>
#include <stdlib.h>
/**
 *  main -  prints all possible combinations of two two-digit numbers.
 *  Return: Always (sucess)
 *
 */
int main(void)
{
	int m, n;
	int i, j, k, l;

	for (m = 0; m < 100; m++)
	{
		i = m / 10; /* doubles fnum */
		j = m % 10; /* singles fnum */

		for (n = 0; n < 100; n++)
		{
			k = n / 10; /* doubles snum */
			l = n % 10; /* singles snum */

			if (i < k || (i == k && j < l))
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(32);
				putchar(k + '0');
				putchar(l + '0');
				if (!(i == 9 && j == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
