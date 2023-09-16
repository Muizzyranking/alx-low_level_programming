#include "main.h"

/**
 * print_most_numbers - prints number 0 to 9 with a new line
 *			should not print 2 and 4
 */

void print_most_numbers(void)
{

	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
