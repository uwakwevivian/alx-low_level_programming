#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: is destination memory
 * @src: is source memory
 * @n: number of bytes of memory to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
