#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 *
 * @dest: the destination the string will be concatenated upon
 * @src: the string to be appended
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	/* check the length of @dest */
	while (dest[i++])
		dest_len++;

	/* append scr to dest */
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
