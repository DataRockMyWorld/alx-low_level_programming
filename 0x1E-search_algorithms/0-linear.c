#include "search_algos.h"

/**
 * linear_search - function that searches for a 
 * 					value in an array of integers using the LSA
 * @array: pointer to the first element of the array to search in
 * @size: No of elements in the array
 * @value: The value to find
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}