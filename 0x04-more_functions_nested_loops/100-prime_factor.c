#include <stdio.h>

/**
 * main - code to print the largest prime factor
 *
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	long prime = 61285475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime /= div;
						}
						}
						printf("%1d\n", prime);
						return (0);
