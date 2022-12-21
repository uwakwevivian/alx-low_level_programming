#include "main.h"

/**
 * _puts - function that prints a string
 * @str: my input string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
