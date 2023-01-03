#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: main string
 * @accept: string (byte occurence) to be searched for.
 *
 * Return: pointer to the first matching byte occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for  (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
