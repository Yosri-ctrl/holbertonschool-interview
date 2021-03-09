#!/usr/bin/python3
"""____"""


def minOperations(n):
    x = 2
    c = 0
    if n == 0 or n == 1:
        return (0)
    while n > 1:
        while n % x == 0:
            c += x
            n /= x
        x += 1
    return (c)
