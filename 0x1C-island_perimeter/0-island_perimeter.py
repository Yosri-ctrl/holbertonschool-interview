#!/usr/bin/python3
""" Calculate the perimeter of the island """


def island_perimeter(grid):
    """ return the perimeter of grid """
    count = 0

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count += 1
                if j == 0 or grid[i][j - 1] != 1:
                    count += 1
                if j == (len(grid[0]) - 1) or grid[i][j + 1] != 1:
                    count += 1
                if i == (len(grid) - 1) or grid[i + 1][j] != 1:
                    count += 1
    return count

