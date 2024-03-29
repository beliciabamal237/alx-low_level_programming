#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a parameter
 * @array: the array of function
 * @size: the size of array
 * @action: poiter to  the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
