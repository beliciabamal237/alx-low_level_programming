#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments it receives
 * @argc: count of arg
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
	{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}
