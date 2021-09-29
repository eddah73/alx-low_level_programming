#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - return index where is matched
 * @array: array of int given to print
 * @size: Size of the array
 * @cmp: pointer of function that compare the array
 * Return: -1 or the index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
