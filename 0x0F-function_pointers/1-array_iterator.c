#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Applies a given function to each element of an array.
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to apply.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        for (size_t i = 0; i < size; ++i)
        {
            action(array[i]);
        }
    }
}
