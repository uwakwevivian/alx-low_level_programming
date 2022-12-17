#include "main.h"

/**
 * print_triangle - Function to print a triangle
 * @size: Parameter/value to be considered.
 *
 * Return: Prints a triangle
 */
void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				_putchar(' ');
			}
				for (tr = 0 ; tr <= ro; tr++)
				{
					_putchar('#');
				}
				putchar('\n');
		}
	}
}
