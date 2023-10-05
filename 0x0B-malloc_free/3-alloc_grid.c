#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate and initialize a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
    int i, j;
    int **grid;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    grid = malloc(height * sizeof(int *));

    if (grid == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));

        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return (NULL);
        }
    }

    return (grid);
}