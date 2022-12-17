#include "main.h"

/**
 * print_diagonal - function to print a line
 * @n: line length control value
 * Return: returns a diagonal line based on value of n
 */
void print_diagonal(int n)
{

	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for  (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			putchar('\n');
		}
	}
}
