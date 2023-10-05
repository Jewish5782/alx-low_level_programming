#include <stdlib.h>

/**
 * argstostr - Concatenates all command-line arguments into a single string.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return (NULL);

    int total_length = 0;
    int i, j, k = 0;
    char *str;

    // Calculate the total length of the concatenated string
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
        {
            total_length++;
        }
        total_length++; // Account for the newline character '\n'
    }

    // Allocate memory for the concatenated string
    str = malloc(sizeof(char) * (total_length + 1));

    if (str == NULL)
        return (NULL);

    // Copy arguments into the concatenated string
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
        {
            str[k++] = av[i][j];
        }
        str[k++] = '\n';
    }

    str[k] = '\0';

    return (str);
}
