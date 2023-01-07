#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @accept: String tocheck matches (m) (in bytes)
 * @s: Main string
 *
 * Return: Number of matches (m) (in bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int m = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				m++;
			}
			j++;
		}
		i++;
	}
	return (m);
}
