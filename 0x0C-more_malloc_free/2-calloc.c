#include "main.h"

/**
 * _calloc - allocates memory for an array of a certain number of elements
 * @nmemb: the number of elememts
 * @size: the byte size of each elements
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i, total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(total_size);

	if (mem = NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		mem[i] = '\0';

	return (mem);

}
