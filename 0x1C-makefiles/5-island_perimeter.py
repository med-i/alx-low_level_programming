#!/usr/bin/python3
"""
This module defines the island_perimeter method.
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    perimiter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 0:
                continue

            if not grid[i][j - 1]:
                perimiter += 1
            if not grid[i][j + 1]:
                perimiter += 1
            if not grid[i - 1][j]:
                perimiter += 1
            if not grid[i + 1][j]:
                perimiter += 1

    return perimiter
