#include "main.h"

/**
 * main -	prints numbers 1 to 100
 *		multiples of 3 prints fizz
 *		multiples of 5 prints buzz
 *		multiples of 3 and 5 prints fizzbuzz
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz");
		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
