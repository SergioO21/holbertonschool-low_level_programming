#!/usr/bin/python3
""" ``island_perimeter`` function """


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """

    perimeter = 0

    for row in range(len(grid)):
        for idx in range(len(grid[row])):

            if row == 0 and grid[row][idx] == 1:
                perimeter += 1

            if idx == 0 and grid[row][idx] == 1:
                perimeter += 1

            if (idx + 1) < len(grid[row]):
                if grid[row][idx] == 0 and grid[row][idx + 1] == 1:
                    perimeter += 1

                elif grid[row][idx] == 1 and grid[row][idx + 1] == 0:
                    perimeter += 1

            elif grid[row][idx] == 1:
                perimeter += 1

            if (row + 1) < len(grid):
                if grid[row][idx] == 0 and grid[row + 1][idx] == 1:
                    perimeter += 1

                if grid[row][idx] == 1 and grid[row + 1][idx] == 0:
                    perimeter += 1

            elif grid[row][idx] == 1:
                perimeter += 1

    return perimeter
