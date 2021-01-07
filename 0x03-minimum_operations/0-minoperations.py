#!/usr/bin/python3
"""____"""


def minOperations(n):
    x = 1
    c = 0
    if n == 0 or n == 1:
        return (0)
    while x < n:
        if (x*2) < n and (n % (x*2)) == 0:
            x *= 2
            c += 2
        else:
            x += x/2
            c += 1

    return (c)
