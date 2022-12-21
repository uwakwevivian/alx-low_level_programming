#include "main.h"

/**
 * _puts - function that prints a string
 * @str: my input string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int index;
	for  (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
