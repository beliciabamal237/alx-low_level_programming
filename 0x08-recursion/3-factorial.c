#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: the number
 *
 * Return: -1 if @n is lower than 0 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
