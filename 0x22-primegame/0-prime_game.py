#!/usr/bin/python3
""" Prime Game 
"""


def is_prime(n):
    """ check if it's a prime 
    """
    for i in range(2, int(n ** 0.5) + 1):
        if not n % i:
            return False
    return True


def isWinner(x, nums):
    """ Check how's the winner and return it 
    """ 
    score = {"Maria": 0, "Ben": 0}
    primes = [0, 0, 2]
    last = primes[-1]

    if max(nums) > last:
        for i in range(last + 1, max(nums) + 1):
            if is_prime(i):
                primes.append(i)
            else:
                primes.append(0)

    for round in range(x):
        _sum = sum((i != 0 and i <= nums[round])
                   for i in primes[:nums[round] + 1])
        if (_sum % 2):
            winner = "Maria"
        else:
            winner = "Ben"
        if winner:
            score[winner] += 1

    if score["Maria"] > score["Ben"]:
        return "Maria"
    elif score["Ben"] > score["Maria"]:
        return "Ben"

    return None
