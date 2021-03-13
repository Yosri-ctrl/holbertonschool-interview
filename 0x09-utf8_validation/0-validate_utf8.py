#!/usr/bin/python3
"""utf-8"""


def validUTF8(data):
    """Utf-8"""
    n = 0
    for nbr in data:
        b = format(nbr, '#010b')[-8:]
        if n == 0:
            for bit in b:
                if bit == '0':
                    break
                n += 1
            if n == 0:
                continue
            if n == 1 or n > 4:
                return False
        else:
            if not (b[0] == '1' and b[1] == '0'):
                return False
        n -= 1
    return n == 0
