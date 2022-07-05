#include "main.h"

/**
 *print_alphabet -> Print the alphabet in lowercase
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
