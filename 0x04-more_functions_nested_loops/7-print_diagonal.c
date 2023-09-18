#include "main.h"

/**
 * print_diagonal - draws a diagonal line to the terminal
 *
 * @n: number of times the line would be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(98);
			_putchar('\n');
	}
}
