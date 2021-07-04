#!/usr/bin/python3
""" ``island_perimeter`` function """


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """

    perimeter = 0

    for row in range(len(grid)):
        for idx in range(len(grid[row])):

            # Checks for land at the top end of the grid.
            if row == 0 and grid[row][idx] == 1:
                perimeter += 1

            # Checks for land on the left end of the grid.
            if idx == 0 and grid[row][idx] == 1:
                perimeter += 1

            # Checks if there is land in the next cell (row) of the grid.
            if (idx + 1) < len(grid[row]):
                if grid[row][idx] == 0 and grid[row][idx + 1] == 1:
                    perimeter += 1

                elif grid[row][idx] == 1 and grid[row][idx + 1] == 0:
                    perimeter += 1

            # Checks for land on the right end of the grid.
            elif grid[row][idx] == 1:
                perimeter += 1

            # Checks if there is land in the next cell (column) of the grid.
            if (row + 1) < len(grid):
                if grid[row][idx] == 0 and grid[row + 1][idx] == 1:
                    perimeter += 1

                if grid[row][idx] == 1 and grid[row + 1][idx] == 0:
                    perimeter += 1

            # Checks for land on the bottom end of the grid.
            elif grid[row][idx] == 1:
                perimeter += 1

    return perimeter
