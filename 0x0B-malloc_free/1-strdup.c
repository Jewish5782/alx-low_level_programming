#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string in a new memory space location.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
    char *copy;
    int size = 0;
    int i;

    if (str == NULL)
    {
        return (NULL);
    }

    while (str[size])
    {
        size++;
    }

    copy = malloc(size + 1);

    if (copy == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        copy[i] = str[i];
    }
    
    copy[size] = '\0';

    return (copy);
}
