#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @n: bytes to be filled
 * @b: constant
 * @s: point to string
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
