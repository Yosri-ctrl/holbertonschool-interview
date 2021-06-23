#!/usr/bin/python3
"""
"""


def makeChange(coins, total):
    if total <= 0:
        return -1
    count = 0
    for _ in range(len(coins)):
        count += int(total / max(coins))
        total -= max(coins) * count
        pre = coins.pop(coins.index(max(coins)))

        if total <= 0: break

    if total + pre != 0: return -1
    return (count)
