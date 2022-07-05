#include "main.h"

/**
 *print_alphabet - Print the alphabet in lowercase
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
