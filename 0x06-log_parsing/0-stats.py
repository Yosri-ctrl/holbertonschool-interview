#!/usr/bin/python3
"""stats"""
import sys


if __name__ == "__main__":
    
    status = {"200": 0, "301": 0, "400": 0, "401": 0,
                    "403": 0, "404": 0, "405": 0, "500": 0}
    count = 0
    n = 0

    try:
        for line in sys.stdin:
            n += 1
            inp = line.split(' ')
            if len(inp) > 2:
                count += int(inp[-1])
                if inp[-2] in status:
                    status[inp[-2]] += 1
            if n % 10 == 0:
                print("File size: {}".format(count))
                for stat in status.keys():
                    if status[stat]:
                        print("{}: {}".format(stat, status[stat]))
    except KeyboardInterrupt:
        pass
    print("File size: {}".format(count))
    for stat in status.keys():
        if status[stat]:
            print("{}: {}".format(stat, status[stat]))
