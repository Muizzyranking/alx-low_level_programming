#include "main.h"

/**
 * _strcmp - compare to strings str1 and str2
 *
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 *
 * Return: 0 if s1 == s2
 *	negative difference if s1 < s2
 *	positive difference if s1 > s2
 */


int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (*s1 - *s2);
}
}
