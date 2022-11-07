#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create an array of chars,
 * and initializes it with a specific char
 * @c: character
 * @size: the size of the memory to print
 * Return: the pointer to the array or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{

	char *ar;
	unsigned int i;

	if (size == 0)
		return (0);

	ar = malloc(size * sizeof(c));

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return  (ar);
}
