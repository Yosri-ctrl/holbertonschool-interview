#!/usr/bin/python3


def rain(list):
    """ Callculat the area occupied by water
    list: is the list to treat
    """
    count = 0
    for i in range(1, len(list) - 1) :
        left = list[i]
        for j in range(i) :
            left = max(left, list[j])
        
        right = list[i] 
        for k in range(i + 1 , len(list)) :
            right = max(right, list[k])

        count += (min(left, right) - list[i])
 
    return count
