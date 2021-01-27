#!/usr/bin/python3
import sys


code = {200: 0, 301: 0, 400: 0, 401: 0, 403: 0, 404: 0, 405: 0, 500: 0}
count = 0
for _ in range(10000):
    try:
        for i in range(10):
            data = sys.stdin.readline()
            #print(data)
            part = data.split()
            #print(part)
            count += int(part[-1])
            code[int(part[-2])] += 1
    except Exception:
        pass
    finally:
        print("File size: {}".format(count))
        for i in code:
            if code[i] != 0:
                print("{}: {}".format(i, code[i]))
