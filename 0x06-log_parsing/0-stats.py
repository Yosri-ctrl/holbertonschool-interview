#!/usr/bin/python3
import sys


code = {200: 0, 301: 0, 400: 0, 401: 0, 403: 0, 404: 0, 405: 0, 500: 0}
count = 0
n = 0

try:
    for line in sys.stdin:
        if n != 0 and n % 10 == 0:
            print("File size: {:d}".format(count))
            for stat, times in code.items():
                if times != 0:
                    print("{:d}: {:d}".format(stat, times))
        n += 1
        data = line.split()
        try:
            stat = int(data[-2])  
            #print("s={:d}".format(stat))
            if stat in code:
                code[stat] += 1
            count += int(data[-1])
        except:
            pass
    print("File size: {:d}".format(count))
    for stat, times in code.items():
        if times != 0:
            print("{:d}: {:d}".format(stat, times))
except KeyboardInterrupt:
    print("File size: {:d}".format(count))
    for stat, times in code.items():
        if times != 0:
            print("{:d}: {:d}".format(stat, times))
    raise