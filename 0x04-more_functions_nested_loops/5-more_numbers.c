#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times.
 */

void more_numbers(void)
{
	int i = 0, j, num;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				num = j % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
		i++
	}
}
