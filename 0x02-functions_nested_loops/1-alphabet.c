#include "main.h"

/**
 * print_alphabet - print the alphabet, in lowercase,
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
