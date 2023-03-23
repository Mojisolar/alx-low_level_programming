#include "main.h"
/**
 * _isalpha -checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabet character or 0 for nothing else
 */
int _isalpha(int c)
{
	((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
	{
		return (1);
	}
	return (0);
}
