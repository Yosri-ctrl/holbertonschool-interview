#!/usr/bin/python3
"""____"""


def minOperations(n):
    x = 1
    c = 0
    if n == 0:
        return 0
    while x < n:
        if ((3 * x) % n) == 0:
            x += 2 * x
            c += 2
        else:
            x += x/2
            c += 1

    return (c)
