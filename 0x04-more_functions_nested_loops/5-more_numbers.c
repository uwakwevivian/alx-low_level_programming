#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 *
 * Return: retuns 0 to 14 10 times
 */
void more_numbers(void)
{

	int i, r;

	for (r = 0; r <= 9; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
