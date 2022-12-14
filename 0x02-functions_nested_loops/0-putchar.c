#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char p[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
