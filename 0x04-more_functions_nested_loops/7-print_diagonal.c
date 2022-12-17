#include "main.h"

/**
 * print_diagonal - function to print a line
 * @n: input number
 * Return: returns a diagonal line based on value of n
 */
void print_diagonal(int n)
{

	int co, sp;

	if (m <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
