#!/usr/bin/python3
'''Island perimeter module'''


def island_perimeter(grid):
    '''Island perimeter method'''
    counter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                counter += 4
                if j > 0 and grid[i][j - 1]:
                    counter -= 2
                if i > 0 and grid[i - 1][j]:
                    counter -= 2
    return counter
