#include "main.h"

/**
 * _isalpha - Checks if a character is uppercase.
 * @c: int value to be checked (ASCII value of char.)
 * Return: 1 if upperercase, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
