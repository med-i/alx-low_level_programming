#!/usr/bin/python3
"""
This module defines the island_perimeter method.
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0
    perimiter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 0:
                continue

            if i == 0 or not grid[i - 1][j]:
                perimiter += 1
            if i == rows - 1 or not grid[i + 1][j]:
                perimiter += 1
            if j == 0 or not grid[i][j - 1]:
                perimiter += 1
            if j == cols - 1 or not grid[i][j + 1]:
                perimiter += 1

    return perimiter
