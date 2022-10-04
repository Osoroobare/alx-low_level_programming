#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		arr[w] = (int *) malloc(sizeof(int) * width);
		if (arr[w] == NULL)
		{
			free(arr);
			for (h = 0; h <= w; h++)
				free(arr[h]);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
		{
			arr[w][h] = 0;
		}
	}
	return (arr);
}
