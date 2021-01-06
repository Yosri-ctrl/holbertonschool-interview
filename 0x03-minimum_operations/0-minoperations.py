#!/usr/bin/python3
"""____"""


def minOperations(n):
    x = 1
    y = x
    c = 0
    if n == 0:
        return 0
    while x < n:
        if ((4 * x) % n) == 0:
            y = x
            x += y
            c += 2
        else:
            x += x/2
            c += 1

    return (c)
