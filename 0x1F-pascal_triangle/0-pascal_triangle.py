#!/usr/bin/python3
"""pascal_triangle
"""


def pascal_triangle(n):
    """ returns a list of lists of integers
    representing the Pascal’s triangle of n
    """
    _list = []
    if n <= 0: return _list

    _list = [[1]]
    if n == 1: return _list

    for row in range(1, n):
        left = -1
        right = 0
        lint = []
        for column in range(row + 1):
            _int = 0
            if left > -1:
                _int += _list[row - 1][left]
            if right < row:
                _int += _list[row - 1][right]
            left += 1
            right += 1
            lint.append(_int)
        _list.append(lint)
    return _list
