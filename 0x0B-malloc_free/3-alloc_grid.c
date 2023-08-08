#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 by 2 grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the array if array not 0, NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	grid = malloc(height * sizeof(int *)); /*allocate memory for rows*/

	if (grid == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < height; i++) /*allocate memory for columns of each row*/
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /* validate memory */
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
			grid[i][j] = 0;
	}

	return (grid);
}
