#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates the memory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return:  a pointer to the allocateed memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
