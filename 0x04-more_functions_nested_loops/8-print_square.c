#include "main.h"

/**
 * print_square - function that prints square
 * @size: line length control value
 *
 * Return: returns line
 */
void print_square(int size)
{
	int row, col;

	row = 1;

	if (size > row)
	{
		while (row <= size)
		{
			col = 1;

		while (col <= size)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
		}
	}
	else
		_putchar('\n');
}
