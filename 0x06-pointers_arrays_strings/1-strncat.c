#include "main.h"

/**
 * _strncat - Concatenates two strings up to 'n' bytes from 'src' to 'dest'.
 *
 * @dest: The destination string to which 'src' will be concatenated.
 * @src: The source string to concatenate to 'dest'.
 * @n: The maximum number of bytes to concatenate from 'src'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	/* checks the lenght of dest */
	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
