#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: The array
 * @size: The size of the array
 * @action: The action to be performed on the array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
