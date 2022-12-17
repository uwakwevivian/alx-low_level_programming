#include "main.h"

/**
 * print_diagonal - function to print a line
 * @row: line length control value
 * @col - column
 * @val - counter
 * Return: returns a diagonal line based on value of n
 */
void print_diagonal(int size)
{
	int row, col;
	
	row = 1;

	if (size > row)
	{
		for (row = 1; row <= size;  row++)
		{
			col = 1;

			while(col <= row -1)
			{

				putchar(' ');
				col++;

			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
