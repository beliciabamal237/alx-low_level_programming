#include <stdio.h>
/**
 * main - prints the size of various types on the computer.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	float b;
	long c;
	char d;
	long long int e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
