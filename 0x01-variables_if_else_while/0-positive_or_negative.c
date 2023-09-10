#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The start of the program
 *
 * Return: the return value is 0 (success)
 */
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
