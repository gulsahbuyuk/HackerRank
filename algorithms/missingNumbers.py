import math
import os
import random
import re
import sys
from collections import Counter


# Complete the missingNumbers function below.
def missingNumbers(arr, brr):
    liste = []
    c1 = {}
    c2 = {}
    for x, y in Counter(arr).most_common():
        c1[x] = y
    for x, y in Counter(brr).most_common():
        c2[x] = y

    for key, value in c2.items():
        if key in c1.keys():
            if value != c1[key]:
                liste.append(key)
        else:
            liste.append(key)

    return sorted(liste)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    m = int(input())

    brr = list(map(int, input().rstrip().split()))

    result = missingNumbers(arr, brr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()