#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if number is positive, zero or negative
 * Return: always (success)
 *
 */
int main(void)
{
	int n;
	srand(time (0));
	n=rand() -RAND-MAX / 2;
	if (n>0)
		printf("%d is positive\n",n);
}
