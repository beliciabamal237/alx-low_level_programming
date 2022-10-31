#include "main.h"
/**
 *  _strchr - locate a character in a string
 *   @s: the string
 *   @c: character to locate
 *   Return: a pointer to the first occurrence of the character c
 *   in the string s, or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
