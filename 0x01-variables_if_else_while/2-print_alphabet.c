#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	putchar(a);
	a++;
	}

	putchar('\n');
	return (0);
}
