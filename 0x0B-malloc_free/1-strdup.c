#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - a function that returns a pointer to a newly allocated
 * @str: string given as a parameter
 *
 * Return:a pointer to the duplicated string or NULL if @str = NULL
 */
char *_strdup(char *str)
{
	char *dst;

	dst = malloc(strlen(str) + 1);

	if (dst == NULL)
		return (NULL);
	strcpy(dst, str);
	return (dst);
}
