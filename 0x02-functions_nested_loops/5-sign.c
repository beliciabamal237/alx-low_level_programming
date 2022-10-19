#include "main.h"

/**
 *  print_sign - write a function that prints the sign of a number
 * @n: the int  to check
 * Return: 1 if n is greater, 0 if is zero, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
