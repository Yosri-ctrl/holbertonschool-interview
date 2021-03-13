#!/usr/bin/python3
import sys

if __name__ == "__main__":
    """_"""
    code = {200: 0, 301: 0, 400: 0, 401: 0, 403: 0, 404: 0, 405: 0, 500: 0}
    count = 0
    n = 0

    try:
        for line in sys.stdin:
            if n != 0 and n % 10 == 0:
                print("File size: {}".format(count))
                for stat, times in code.items():
                    if times:
                        print("{}: {}".format(stat, times))
            n += 1
            data = line.split()
            try:
                stat = int(data[-2])
                # print("s={:d}".format(stat))
                if stat in code:
                    code[stat] += 1
                count += int(data[-1])
            except:
                pass
        print("File size: {}".format(count))
        for stat, times in code.items():
            if times:
                print("{}: {}".format(stat, times))
    except KeyboardInterrupt:
        print("File size: {}".format(count))
        for stat, times in code.items():
            if times:
                print("{}: {}".format(stat, times))
        raise
