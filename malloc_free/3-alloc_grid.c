#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers initialized to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL on failure or invalid input
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Return NULL if width or height is zero or negative */
    if (width <= 0 || height <= 0)
        return NULL;

    /* Allocate memory for array of pointers (each pointer is a row) */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return NULL;

    /* Allocate memory for each row and initialize elements to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* On failure, free all previously allocated rows */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }

        /* Initialize all elements in this row to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    /* Return pointer to the newly allocated 2D array */
    return grid;
}
