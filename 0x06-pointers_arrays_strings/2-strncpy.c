#include "main.h"


/**
 * _strncpy - Copy up to 'n' characters from 'src' to 'dest'.
 *
 * @dest: the destination the copied string will be stored.
 * @src: the source where the string will be copied from.
 * @n: the maximum number of bytes to be copied.
 *
 * Return: a pointer to the 'dest' string
 */


char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, i = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[index] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
