#include "main.h"


/**
 * create_arr - cretaes an arr of chars and
 *                intialize it with a specific char
 * @size: size of the arr
 * @c: the char it will be initialized with
 *
 * Return: NULL if size = 0
 *         pointer to the arr or NULL if failed
 */


char *create_arr(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = c;

	return (arr);
}
