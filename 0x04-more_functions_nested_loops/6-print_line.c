#include "main.h"

/**
 * print_line - prints a straight line to the terminal
 *
 * @n: the  number of times _ will be printed
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar ('\n');
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar ('\n');
}

