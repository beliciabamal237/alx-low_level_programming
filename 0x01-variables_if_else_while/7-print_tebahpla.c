#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
