#include "main.h"

/**
 * print_diagonal - function to print a line
 * @n: line length control value
 * Return: returns a diagonal line based on value of n
 */
void print_diagonal(int n)
{
	int a = 1;

	if (n > 0)
	{
		_putchar('\\');

		while (i < n)
		{
			int val = 0;

			_putchar('\n');
			while (val < a)
			{
				_putchar(' ');
				val++;
			}
			putchar('\\');
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
