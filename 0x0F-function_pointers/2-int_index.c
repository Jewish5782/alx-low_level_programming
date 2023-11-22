#include "function_pointers.h"

/**
 * int_index - Finds the index of an integer in an array using a comparison function.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison function.
 * Return: Index of the first matching element, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array == NULL || size <= 0 || cmp == NULL)
        return -1;

    for (int i = 0; i < size; ++i)
    {
        if (cmp(array[i]))
            return i;
    }

    return -1;
}
