#!/usr/bin/python3
def canUnlockAll(box):
    """
    Check if a list is unlocked or not
    """
    key = [0]
    result = [j for j in range(len(box))]

    for i in key:
        if i in range(len(box)):
            for x in box[i]:
                if x not in key:
                    key.append(x)
    key.sort()
    if result == key:
        return("true")
    else:
        return("false")
