#!/usr/bin/python3
def island_perimeter(grid):
    count = 0
    for i in grid:
        for j in i:
            if j == 1:
                count += 1
    if count % 2 != 0:
        count += 1
    count *= 2
    return count