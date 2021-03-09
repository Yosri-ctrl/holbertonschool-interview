#include "sandpiles.h"

/**
* sandpiles_sum - add two grid and sandpile it
* @grid1: the first grid
* @grid2: the second grid to treat
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int _check = check(grid1, grid2);

	if (_check)
		rumble(grid1, grid2);
}

/**
* check - sum the two grids and check for overflow
* @grid1: the first grid
* @grid2: the second grid
* Return: 1 if there is overflow, 0 otherwise
*/
int check(int grid1[3][3], int grid2[3][3])
{
	int i, j, status = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] += grid2[i][j];
			grid2[i][j] = 0;
			if (grid1[i][j] >= 4)
				status = 1;
		}
	}
	return (status);
}

/**
* rumble - stablise the grid
* @grid1: the first grid
* @grid2: the second grid
*/
void rumble(int grid1[3][3], int grid2[3][3])
{
	int i, j, status = 1;

	while (status)
	{
		printf("=\n");
		_print(grid1);
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (grid1[i][j] >= 4)
				{
					grid1[i][j] -= 4;
					if (i - 1 >= 0)
						grid2[i - 1][j] += 1;
					if (i + 1 < 3)
						grid2[i + 1][j] += 1;
					if (j - 1 >= 0)
						grid2[i][j - 1] += 1;
					if (j + 1 < 3)
						grid2[i][j + 1] += 1;
				}
			}
		}
		status = check(grid1, grid2);
	}
}

/**
 * _print - print the grid grid
 * @grid: the grid to be printed
*/
void _print(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}
