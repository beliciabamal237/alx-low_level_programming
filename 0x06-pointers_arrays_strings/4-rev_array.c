#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array  of integers
 * @n: the number of integers to swap
 *
 * Return: void
 * /
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
