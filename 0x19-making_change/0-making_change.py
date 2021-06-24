#!/usr/bin/python3
""" determine the fewest number of coins needed to meet total
"""


def makeChange(coins, total):
    """return the fewest number of coins needed to meet a given amount
    """
    if total <= 0:
        return -1
    coins.sort()
    coins.reverse()
    count = 0
    for coin in coins:
        if total <= 0:
            break
        buff = total // coin
        count += total // coin
        total -= (total // coin) * coin
    if total != 0:
        return -1
    return count
