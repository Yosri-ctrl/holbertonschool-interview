#!/usr/bin/python3
"""
The Nqueens Puzzle
Find all possible solution in n*n chessboard
"""
from sys import argv


def check(position, y, z, n):
    """
    Check if position[y, z] have any intersections
    with any of the previous queens
    position: list of cordination of queens
    [y, z]: position of the new queen
    n: nbr of queens
    """
    # print(position)
    for pos in position:
        all = generat(pos, n)
        if [y, z] in all:
            # print("{},{} => {}".format(y,z,all))
            return 0
    return 1


def generat(pos, n):
    """
    Given a cordination of a queen
    genearte all the possible movment
    in the board
    pos= [x, y]
    n: number of queens
    """
    all = []
    p0 = pos[0]
    p1 = pos[1]
    # print(pos)
    for i in range(n):
        if (p1 + i) < n:
            all.append([p0, p1 + i])
        if (p0 + i) < n:
            all.append([p0 + i, p1])
        if (p1 - i) >= 0:
            all.append([p0, p1 - i])
        if (p0 - i) >= 0:
            all.append([p0 - i, p1])
        if (p0 + i) < n and (p1 + i) < n:
            all.append([p0 + i, p1 + i])
        if (p0 - i) >= 0 and (p1 - i) >= 0:
            all.append([p0 - i, p1 - i])
        if (p0 + i) < n and (p1 - i) >= 0:
            all.append([p0 + i, p1 - i])
        if (p0 - i) >= 0 and (p1 + i) < n:
            all.append([p0 - i, p1 + i])
    # print(all)
    return (all)


if __name__ == "__main__":
    """
    Find all possible locations of queens
    in a n*n board
    Return the queens cordinations
    """
    n = int(argv[1])

    array = [[0 for i in range(n)] for i in range(n)]
    position = []
    result = []

    for x in range(n):
        array[0][x] = 1
        position.append([0, x])
        count = 1

        # print("positions: {}".format(position))
        for y in range(1, n):
            for z in range(n):
                if (check(position, y, z, n)):
                    array[y][z] = 1
                    count += 1
                    position.append([y, z])
                    break
                else:
                    continue
                break

        if count == n:
            for i in range(n):
                for j in range(n):
                    if array[i][j] == 1:
                        result.append([i, j])
            print(result)
        # print("count={}".format(count))
        array = [[0 for i in range(n)] for i in range(n)]
        position = []
        result = []
        count = 0
