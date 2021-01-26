#!/usr/bin/python3
import sys
import fileinput


code = {200: 0, 301: 0, 400: 0, 401: 0, 403: 0, 404: 0, 405: 0, 500: 0}
sum = 0
for _ in range(10000):
    for _ in range(10):
        data = sys.stdin.readline()
        part = data.split()
        sum += int(part[-1])
        code[int(part[-2])] += 1
    print("File size: {}".format(sum))
    for i in code:
        if code[i] != 0:
            print(i, ": ", code[i])
