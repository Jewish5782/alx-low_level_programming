#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings and return the result.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
    int i;
    char *result;
    int size1 = 0;
    int size2 = 0;

    if (s1 != NULL)
    {
        while (s1[size1])
        {
            size1++;
        }
    }

    if (s2 != NULL)
    {
        while (s2[size2])
        {
            size2++;
        }
    }

    result = malloc(size1 + size2 + 1);

    if (!result)
    {
        return (NULL);
    }

    for (i = 0; i < size1 + size2; i++)
    {
        if (s1 != NULL && i < size1)
        {
            result[i] = s1[i];
        }
        else if (s2 != NULL)
        {
            result[i] = s2[i - size1];
        }
    }

    result[size1 + size2] = '\0';

    return (result);
}
