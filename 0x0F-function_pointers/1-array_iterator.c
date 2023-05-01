#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - It implies print each array elem on a newl
 * @array: It represents array
 * @size: It represents how many elem to print
 * @action: It represents pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


