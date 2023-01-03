#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer address to modify
 * @to: value to assign
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
