#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with a char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the allocated and initialized array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
str[i] = c;
}

return (str);
}
